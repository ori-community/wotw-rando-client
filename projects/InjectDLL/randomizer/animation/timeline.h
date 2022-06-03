#pragma once

#include <randomizer/animation/animation.h>
#include <randomizer/animation/timeline_entries/base.h>
#include <randomizer/animation/timeline_state.h>
#include <randomizer/cached_loader.h>
#include <randomizer/messages.h>
#include <randomizer/sound.h>

#include <optional>
#include <unordered_map>
#include <variant>

namespace randomizer {
    class Timeline {
    public:
        Timeline(std::vector<std::shared_ptr<timeline_entries::Base>> entries, TimelineState state);
        Timeline(Timeline const& other);
        ~Timeline();

        void start();
        void update(float dt);
        void stop();

        bool is_finished() { return !m_started; }
        app::GameObject* root() { return m_state.root; }
        void attach(app::GameObject* go) { m_attached = go; }
        void attach_offset(app::Vector3 value) { m_attach_offset = value; }

        TimelineVariable* variable(std::string name);

    private:
        std::vector<std::shared_ptr<timeline_entries::Base>> m_entries;
        std::vector<std::shared_ptr<timeline_entries::Base>> m_active_entries;

        app::GameObject* m_attached;
        app::Vector3 m_attach_offset;

        TimelineState m_state;
        int m_entry;
        bool m_started;
    };

    std::unique_ptr<Timeline> load_timeline(std::string path);
    std::unique_ptr<Timeline> copy_timeline(std::unique_ptr<Timeline> const& value);
    extern CachedLoader<std::unique_ptr<Timeline>, std::unique_ptr<Timeline> const&, load_timeline, copy_timeline> timeline_cache;
} // namespace randomizer
