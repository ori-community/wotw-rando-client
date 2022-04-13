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
#include <Il2CppModLoader/il2cpp_math.h>

using namespace modloader;

namespace randomizer
{
    CachedLoader<std::unique_ptr<Timeline>, std::unique_ptr<Timeline> const&, load_timeline, copy_timeline> timeline_cache;

    using entry_factory = std::shared_ptr<timeline_entries::Base>(*)();
    std::unordered_map<TimelineEntryType, entry_factory> factories{
        { TimelineEntryType::Animation, []() -> std::shared_ptr<timeline_entries::Base> { return std::make_shared<timeline_entries::Animation>(); } },
        { TimelineEntryType::Sound, []() -> std::shared_ptr<timeline_entries::Base> { return std::make_shared<timeline_entries::Sound>(); } },
        { TimelineEntryType::Text, []() -> std::shared_ptr<timeline_entries::Base> { return std::make_shared<timeline_entries::Text>(); } },
        { TimelineEntryType::LerpPosition, []() -> std::shared_ptr<timeline_entries::Base> { return std::make_shared<timeline_entries::LerpPosition>(); } },
        { TimelineEntryType::LerpRotation, []() -> std::shared_ptr<timeline_entries::Base> { return std::make_shared<timeline_entries::LerpRotation>(); } },
        { TimelineEntryType::LerpScale, []() -> std::shared_ptr<timeline_entries::Base> { return std::make_shared<timeline_entries::LerpScale>(); } },
        { TimelineEntryType::Position, []() -> std::shared_ptr<timeline_entries::Base> { return std::make_shared<timeline_entries::Position>(); } },
        { TimelineEntryType::Rotation, []() -> std::shared_ptr<timeline_entries::Base> { return std::make_shared<timeline_entries::Rotation>(); } },
        { TimelineEntryType::Scale, []() -> std::shared_ptr<timeline_entries::Base> { return std::make_shared<timeline_entries::Scale>(); } },
        { TimelineEntryType::Color, []() -> std::shared_ptr<timeline_entries::Base> { return std::make_shared<timeline_entries::Color>(); } },
    };

    void parse_entries(std::string path, std::vector<std::shared_ptr<timeline_entries::Base>>& frames, nlohmann::json& j)
    {
        for (auto jentry : j)
        {
            auto type = jentry.value("type", TimelineEntryType::Unknown);
            if (type == TimelineEntryType::Group)
            {
                auto arr = jentry.value("entries", nlohmann::json::array());
                for (auto& sub_entry : arr)
                    for (auto& [key, value] : jentry.items())
                        if (key != "entries" && key != "type")
                            sub_entry[key] = value;

                parse_entries(path, frames, arr);
            }
            else
            {
                auto it = factories.find(type);
                if (it != factories.end())
                {
                    auto entry = it->second();
                    entry->parse(jentry);
                    frames.push_back(entry);
                }
                else
                    trace(MessageType::Warning, 3, "timeline", format("unknown timeline entry in '%s%s'", base_path.c_str(), path.c_str()));
            }
        }
    }

    std::unique_ptr<Timeline> load_timeline(std::string path)
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
                trace(MessageType::Warning, 3, "timeline", format("failed to parse timeline '%s%s'", base_path.c_str(), path.c_str()));
                return std::move(std::unique_ptr<Timeline>());
            }
        }

        return std::make_unique<Timeline>(frames);
    }

    std::unique_ptr<Timeline> copy_timeline(std::unique_ptr<Timeline> const& value)
    {
        return std::unique_ptr<Timeline>(new Timeline(*value.get()));
    }

    Timeline::Timeline(std::vector<std::shared_ptr<timeline_entries::Base>> entries)
        : m_entries(entries)
        , m_entry(0)
        , m_started(false)
        , m_attached(nullptr)
        , m_attach_offset{ 0, 0, 0 }
    {
        m_state.root = il2cpp::create_object<app::GameObject>("UnityEngine", "GameObject");
        il2cpp::invoke(m_state.root, ".ctor");
        il2cpp::invoke(m_state.root, "set_name", il2cpp::string_new("rando_timeline"));
        game::add_to_container(game::RandoContainer::GameObjects, m_state.root);
        std::sort(m_entries.begin(), m_entries.end(), [](auto const& a, auto const& b) {
            if (a->start_time == b->start_time)
                return a->type < b->type;

            return a->start_time < b->start_time;
        });
    }

    Timeline::Timeline(Timeline const& other)
        : m_entries(other.m_entries)
        , m_entry(0)
        , m_started(false)
        , m_attached(nullptr)
        , m_attach_offset{ 0, 0, 0 }
    {
        m_state.root = il2cpp::create_object<app::GameObject>("UnityEngine", "GameObject");
        il2cpp::invoke(m_state.root, ".ctor");
        il2cpp::invoke(m_state.root, "set_name", il2cpp::string_new("rando_timeline"));
        game::add_to_container(game::RandoContainer::GameObjects, m_state.root);
    }

    Timeline::~Timeline()
    {
        if (il2cpp::unity::is_valid(m_state.root))
        {
            il2cpp::unity::destroy_object(m_state.root);
            m_state.root = nullptr;
        }
    }

    void Timeline::start()
    {
        m_state.time = 0;
        m_entry = 0;
        m_started = true;
        update(0);
    }

    void Timeline::update(float dt)
    {
        if (!m_started)
            return;

        if (il2cpp::unity::is_valid(m_attached))
        {
            auto pos = il2cpp::unity::get_position(m_attached) + m_attach_offset;
            il2cpp::unity::set_position(m_state.root, pos);
        }

        m_state.time += dt;
        while (m_entry < m_entries.size() && m_entries[m_entry]->start_time <= m_state.time)
        {
            m_active_entries.push_back(m_entries[m_entry]);
            ++m_entry;
        }

        for (auto it = m_active_entries.begin(); it != m_active_entries.end();)
        {
            if ((*it)->update_state(m_state, dt))
                it = m_active_entries.erase(it);
            else
                ++it;
        }

        if (m_active_entries.empty() && m_entry >= m_entries.size())
            stop();
    }

    void Timeline::stop()
    {
        if (!m_started)
            return;

        m_active_entries.clear();
        m_state.active_animations.clear();
        m_state.active_sounds.clear();
        m_state.active_text.clear();
        m_state.time = 0;
        m_entry = 0;
        m_started = false;
    }
}

// TODO: Everything below here should be removed when we move to using only C++ as we can use the timeline_cache directly.
namespace
{
    IL2CPP_BINDING(UnityEngine, Transform, void, set_position, (app::Transform* this_ptr, app::Vector3* position));
    IL2CPP_BINDING(UnityEngine, Transform, void, set_rotation, (app::Transform* this_ptr, app::Quaternion* rotation));
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
        it->second->attach(go);
    }
}

INJECT_C_DLLEXPORT void timeline_position(int id, app::Vector3 value)
{
    auto it = csharp_timelines.find(id);
    if (it != csharp_timelines.end())
    {
        auto transform = il2cpp::unity::get_transform(it->second->root());
        Transform::set_position(transform, &value);
    }
}

INJECT_C_DLLEXPORT void timeline_rotation(int id, app::Vector3 value)
{
    auto it = csharp_timelines.find(id);
    if (it != csharp_timelines.end())
    {
        auto transform = il2cpp::unity::get_transform(it->second->root());
        auto quat = Quaternion::Euler(value.x, value.y, value.z);
        Transform::set_rotation(transform, &quat);
    }
}

INJECT_C_DLLEXPORT void timeline_local_position(int id, app::Vector3 value)
{
    auto it = csharp_timelines.find(id);
    if (it != csharp_timelines.end())
    {
        it->second->attach_offset(value);
        auto transform = il2cpp::unity::get_transform(it->second->root());
        Transform::set_localPosition(transform, &value);
    }
}

INJECT_C_DLLEXPORT void timeline_local_scale(int id, app::Vector3 value)
{
    auto it = csharp_timelines.find(id);
    if (it != csharp_timelines.end())
    {
        auto transform = il2cpp::unity::get_transform(it->second->root());
        Transform::set_localScale(transform, &value);
    }
}

INJECT_C_DLLEXPORT void timeline_local_rotation(int id, app::Vector3 value)
{
    auto it = csharp_timelines.find(id);
    if (it != csharp_timelines.end())
    {
        auto transform = il2cpp::unity::get_transform(it->second->root());
        auto quat = Quaternion::Euler(value.x, value.y, value.z);
        Transform::set_localRotation(transform, &quat);
    }
}
