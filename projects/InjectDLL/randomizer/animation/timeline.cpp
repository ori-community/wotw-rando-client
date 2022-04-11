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
    CachedLoader<std::unique_ptr<Timeline>, load_timeline, copy_timeline> timeline_cache;

    std::unique_ptr<Timeline>&& load_timeline(std::string path)
    {
        std::vector<std::shared_ptr<timeline_entries::Base>> frames;
        nlohmann::json j;
        if (load_json_file(path, j))
        {
            try
            {
                // TOOD: Parse timeline.
                for (auto jentry : j)
                {
                    auto type = jentry.value("type", TimelineEntryType::Unknown);
                    std::shared_ptr<timeline_entries::Base> entry = nullptr;
                    switch (type)
                    {
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
            catch (...)
            {
                trace(MessageType::Warning, 3, "timeline", format("failed to parse timeline '%s%s'", base_path.c_str(), path));
                return false;
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
        , time(0)
        , started(false)
    {
        std::sort(this->entries.begin(), this->entries.end(), [](auto const& a, auto const& b) {
            return a->start_time < b->start_time;
        });
    }

    Timeline::Timeline(Timeline const& other)
        : entries(other.entries)
        , entry(0)
        , started(false)
    {}

    void Timeline::start(app::GameObject* root)
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
