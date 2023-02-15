#include <Core/api/game/game.h>
#include <Core/api/scenes/scene_load.h>
#include <Core/cached_loader.h>
#include <Core/utils/json_serializers.h>
#include <animation/timeline.h>
#include <animation/timeline_entries/base.h>
#include <animation/timeline_entries/lerpers.h>
#include <animation/timeline_entries/objects.h>
#include <animation/timeline_entries/setters.h>

#include <Common/ext.h>

#include <Modloader/app/methods/UnityEngine/Quaternion.h>
#include <Modloader/app/methods/UnityEngine/Transform.h>
#include <Modloader/app/types/GameObject.h>
#include <Modloader/il2cpp_math.h>
#include <Modloader/modloader.h>

using namespace modloader;
using namespace app::classes;
using namespace app::classes::UnityEngine;

namespace core::animation {
    CachedLoader<std::unique_ptr<Timeline>, std::unique_ptr<Timeline> const&, load_timeline, copy_timeline> timeline_cache;

    using entry_factory = std::shared_ptr<timeline_entries::Base> (*)();
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

    void parse_entries(std::string path, TimelineState& state, std::vector<std::shared_ptr<timeline_entries::Base>>& frames, nlohmann::json& j) {
        for (auto jentry : j) {
            auto type = jentry.value("type", TimelineEntryType::Unknown);
            if (type == TimelineEntryType::Group) {
                auto arr = jentry.value("entries", nlohmann::json::array());
                for (auto& sub_entry : arr)
                    for (auto& [key, value] : jentry.items())
                        if (key != "entries" && key != "type")
                            sub_entry[key] = value;

                parse_entries(path, state, frames, arr);
            } else {
                auto it = factories.find(type);
                if (it != factories.end()) {
                    auto entry = it->second();
                    entry->parse(state, jentry);
                    frames.push_back(entry);
                } else
                    trace(MessageType::Warning, 3, "timeline", fmt::format("unknown timeline entry in '{}{}'", base_path().string(), path));
            }
        }
    }

    std::unique_ptr<Timeline> load_timeline(std::string path) {
        TimelineState state;
        std::vector<std::shared_ptr<timeline_entries::Base>> frames;
        nlohmann::json j;
        if (load_json_file(path, j)) {
            try {
                parse_entries(path, state, frames, j);
            } catch (...) {
                trace(MessageType::Warning, 3, "timeline", fmt::format("failed to parse timeline '{}{}'", base_path().string(), path));
                return nullptr;
            }
        }

        return std::make_unique<Timeline>(frames, state);
    }

    std::unique_ptr<Timeline> copy_timeline(std::unique_ptr<Timeline> const& value) {
        return std::unique_ptr<Timeline>(new Timeline(*value.get()));
    }

    Timeline::Timeline(std::vector<std::shared_ptr<timeline_entries::Base>> entries, TimelineState state)
            : m_entries(entries)
            , m_attached(nullptr)
            , m_attach_offset{ 0, 0, 0 }
            , m_state(state)
            , m_entry(0)
            , m_started(false) {
        m_state.root = types::GameObject::create();
        il2cpp::invoke(m_state.root, ".ctor");
        il2cpp::invoke(m_state.root, "set_name", il2cpp::string_new("rando_timeline"));
        core::api::game::add_to_container(core::api::game::RandoContainer::GameObjects, m_state.root);
        std::sort(m_entries.begin(), m_entries.end(), [](auto const& a, auto const& b) {
            if (a->start_time == b->start_time)
                return a->type < b->type;

            return a->start_time < b->start_time;
        });
    }

    Timeline::Timeline(Timeline const& other)
            : m_entries(other.m_entries)
            , m_attached(nullptr)
            , m_attach_offset{ 0, 0, 0 }
            , m_entry(0)
            , m_started(false) {
        m_state.variable_values = other.m_state.variable_values;
        m_state.root = types::GameObject::create();
        il2cpp::invoke(m_state.root, ".ctor");
        il2cpp::invoke(m_state.root, "set_name", il2cpp::string_new("rando_timeline"));
        core::api::game::add_to_container(core::api::game::RandoContainer::GameObjects, m_state.root);
    }

    Timeline::~Timeline() {
        if (il2cpp::unity::is_valid(m_state.root)) {
            il2cpp::unity::destroy_object(m_state.root);
            m_state.root = nullptr;
        }
    }

    void Timeline::start() {
        m_state.time = 0;
        m_entry = 0;
        m_started = true;
        update(0);
    }

    void Timeline::update(float dt) {
        if (!m_started)
            return;

        if (il2cpp::unity::is_valid(m_attached)) {
            auto pos = il2cpp::unity::get_position(m_attached) + m_attach_offset;
            il2cpp::unity::set_position(m_state.root, pos);
        }

        m_state.time += dt;
        while (m_entry < m_entries.size() && m_entries[m_entry]->start_time <= m_state.time) {
            m_active_entries.push_back(m_entries[m_entry]);
            ++m_entry;
        }

        for (auto it = m_active_entries.begin(); it != m_active_entries.end();) {
            if ((*it)->update_state(m_state, dt))
                it = m_active_entries.erase(it);
            else
                ++it;
        }

        if (m_active_entries.empty() && m_entry >= m_entries.size())
            stop();
    }

    void Timeline::stop() {
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

    VariableValue* Timeline::variable(std::string name, bool create_if_not_exists) {
        auto it = m_state.variable_values.find(name);

        if (it == m_state.variable_values.end()) {
            if (create_if_not_exists) {
                m_state.variable_values[name] = VariableValue();
                return &m_state.variable_values[name];
            } else {
                return nullptr;
            }
        }

        return &it->second;
    }
} // namespace core::animation
