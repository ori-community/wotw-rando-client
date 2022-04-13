#include <features/scenes/scene_load.h>
#include <game/game.h>
#include <randomizer/cached_loader.h>
#include <randomizer/animation/timeline.h>
#include <randomizer/animation/timeline_entries/base.h>
#include <randomizer/animation/timeline_entries/lerpers.h>
#include <randomizer/animation/timeline_entries/objects.h>
#include <randomizer/animation/timeline_entries/setters.h>
#include <utils/json_serializers.h>

#include <Common/ext.h>

#include <Il2CppModLoader/common.h>

using namespace modloader;

namespace randomizer
{
    CachedLoader<std::unique_ptr<Timeline>, std::unique_ptr<Timeline> const&, load_timeline, copy_timeline> timeline_cache;

    void parse_entries(std::string path, std::vector<std::shared_ptr<timeline_entries::Base>>& frames, nlohmann::json& j)
    {
        for (auto jentry : j)
        {
            auto type = jentry.value("type", TimelineEntryType::Unknown);
            std::shared_ptr<timeline_entries::Base> entry = nullptr;
            switch (type)
            {
            case TimelineEntryType::Group:
            {
                auto arr = jentry.value("entries", nlohmann::json::array());
                for (auto& sub_entry : arr)
                {
                    if (jentry.contains("id"))
                        sub_entry["id"] = jentry.at("id").get<int>();
                    if (jentry.contains("start_time"))
                        sub_entry["start_time"] = jentry.at("start_time").get<float>();
                }

                parse_entries(path, frames, arr);
                break;
            }
            case TimelineEntryType::Animation:
                entry = std::make_shared<timeline_entries::Animation>();
                break;
            case TimelineEntryType::Sound:
                entry = std::make_shared<timeline_entries::Sound>();
                break;
            case TimelineEntryType::Text:
                entry = std::make_shared<timeline_entries::Text>();
                break;
            case TimelineEntryType::LerpPosition:
                entry = std::make_shared<timeline_entries::LerpPosition>();
                break;
            case TimelineEntryType::Position:
                entry = std::make_shared<timeline_entries::Position>();
                break;
            case TimelineEntryType::Rotation:
                entry = std::make_shared<timeline_entries::Rotation>();
                break;
            case TimelineEntryType::Scale:
                entry = std::make_shared<timeline_entries::Scale>();
                break;
            case TimelineEntryType::Color:
                entry = std::make_shared<timeline_entries::Color>();
                break;
            default:
                trace(MessageType::Warning, 3, "timeline", format("unknown timeline entry in '%s%s'", base_path.c_str(), path));
            }

            if (entry != nullptr)
            {
                entry->parse(jentry);
                frames.push_back(entry);
            }
        }
    }

    std::unique_ptr<Timeline>&& load_timeline(std::string path)
    {
        std::vector<std::shared_ptr<timeline_entries::Base>> frames;
        nlohmann::json j;
        if (load_json_file(path, j))
        {
            try
            {
                parse_entries(path, frames, j);
            }
            catch (...)
            {
                trace(MessageType::Warning, 3, "timeline", format("failed to parse timeline '%s%s'", base_path.c_str(), path));
                return std::move(std::unique_ptr<Timeline>());
            }
        }

        return std::move(std::make_unique<Timeline>(frames));
    }

    std::unique_ptr<Timeline>&& copy_timeline(std::unique_ptr<Timeline> const& value)
    {
        return std::move(std::unique_ptr<Timeline>(new Timeline(*value.get())));
    }

    Timeline::Timeline(std::vector<std::shared_ptr<timeline_entries::Base>> entries)
        : entries(entries)
        , entry(0)
        , started(false)
    {
        state.root = il2cpp::create_object<app::GameObject>("UnityEngine", "GameObject");
        il2cpp::invoke(state.root, ".ctor");
        game::add_to_container(game::RandoContainer::GameObjects, state.root);
        std::sort(this->entries.begin(), this->entries.end(), [](auto const& a, auto const& b) {
            if (a->start_time == b->start_time)
                return a->type < b->type;

            return a->start_time < b->start_time;
        });
    }

    Timeline::Timeline(Timeline const& other)
        : entries(other.entries)
        , entry(0)
        , started(false)
    {
        state.root = il2cpp::create_object<app::GameObject>("UnityEngine", "GameObject");
        il2cpp::invoke(state.root, ".ctor");
        game::add_to_container(game::RandoContainer::GameObjects, state.root);
    }

    Timeline::~Timeline()
    {
        if (il2cpp::unity::is_valid(state.root))
        {
            il2cpp::unity::destroy_object(state.root);
            state.root = nullptr;
        }
    }

    void Timeline::start()
    {
        state.time = 0;
        entry = 0;
        started = true;
        update(0);
    }

    void Timeline::update(float dt)
    {
        if (!started)
            return;

        state.time += dt;
        while (entry < entries.size() && entries[entry]->start_time <= state.time)
        {
            active_entries.push_back(entries[entry]);
            ++entry;
        }

        for (auto it = active_entries.begin(); it != active_entries.end();)
        {
            if ((*it)->update_state(state, dt))
                it = active_entries.erase(it);
            else
                ++it;
        }

        if (active_entries.empty() && entry >= entries.size())
            stop();
    }

    void Timeline::stop()
    {
        if (!started)
            return;

        active_entries.clear();
        state.active_animations.clear();
        state.active_sounds.clear();
        state.active_text.clear();
        state.time = 0;
        entry = 0;
        started = false;
    }
}

// TODO: Everything below here should be removed when we move to using only C++ as we can use the timeline_cache directly.
namespace
{
    IL2CPP_BINDING(UnityEngine, Transform, void, set_localPosition, (app::Transform* this_ptr, app::Vector3* position));
    IL2CPP_BINDING(UnityEngine, Transform, void, set_localScale, (app::Transform* this_ptr, app::Vector3* scale));
    IL2CPP_BINDING(UnityEngine, Transform, void, set_localRotation, (app::Transform* this_ptr, app::Quaternion* rotation));
    STATIC_IL2CPP_BINDING(UnityEngine, Quaternion, app::Quaternion, Euler, (float x, float y, float z));

    int next_timeline_id = 1;
    std::unordered_map<int, std::unique_ptr<randomizer::Timeline>> csharp_timelines;

    void update_csharp_timelines(GameEvent game_event, EventTiming timing)
    {
        for (auto it = csharp_timelines.begin(); it != csharp_timelines.end();)
        {
            if (it->second->is_finished())
                it = csharp_timelines.erase(it);
            else
            {
                it->second->update(game::delta_time());
                ++it;
            }
        }
    }

    void initialize()
    {
        game::event_bus().register_handler(GameEvent::Update, EventTiming::End, update_csharp_timelines);
    }

    CALL_ON_INIT(initialize);
}

INJECT_C_DLLEXPORT void timeline_preload(const char* path)
{
    randomizer::timeline_cache.load(path);
}

INJECT_C_DLLEXPORT int timeline_create(const char* path)
{
    csharp_timelines[next_timeline_id] = randomizer::timeline_cache.get(path);
    return next_timeline_id++;
}

INJECT_C_DLLEXPORT void timeline_destroy(int id)
{
    csharp_timelines.erase(id);
}

INJECT_C_DLLEXPORT void timeline_start(int id)
{
    auto it = csharp_timelines.find(id);
    if (it != csharp_timelines.end())
    {
        it->second->start();
    }
}

INJECT_C_DLLEXPORT void timeline_attach(int id, const char* path)
{
    auto it = csharp_timelines.find(id);
    if (it != csharp_timelines.end())
    {
        auto go = scenes::get_game_object(path);
        if (il2cpp::unity::is_valid(go))
            il2cpp::unity::set_parent(it->second->root(), go);
    }
}

INJECT_C_DLLEXPORT void timeline_position(int id, app::Vector3 value)
{
    auto it = csharp_timelines.find(id);
    if (it != csharp_timelines.end())
    {
        auto transform = il2cpp::unity::get_transform(it->second->root());
        Transform::set_localPosition(transform, &value);
    }
}

INJECT_C_DLLEXPORT void timeline_scale(int id, app::Vector3 value)
{
    auto it = csharp_timelines.find(id);
    if (it != csharp_timelines.end())
    {
        auto transform = il2cpp::unity::get_transform(it->second->root());
        Transform::set_localScale(transform, &value);
    }
}

INJECT_C_DLLEXPORT void timeline_rotation(int id, app::Vector3 value)
{
    auto it = csharp_timelines.find(id);
    if (it != csharp_timelines.end())
    {
        auto transform = il2cpp::unity::get_transform(it->second->root());
        auto quat = Quaternion::Euler(value.x, value.y, value.z);
        Transform::set_localRotation(transform, &quat);
    }
}
