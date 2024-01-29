#pragma once

#include <Core/animation/animation.h>
#include <Core/animation/timeline_entries/base.h>
#include <Core/animation/timeline_state.h>
#include <Core/api/audio.h>
#include <Core/cached_loader.h>
#include <Core/macros.h>

#include <optional>
#include <unordered_map>
#include <variant>

namespace core::animation {
    class CORE_DLLEXPORT Timeline {
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

        VariableValue* variable(std::string name, bool create_if_not_exists = true);

    private:
        std::vector<std::shared_ptr<timeline_entries::Base>> m_entries;
        std::vector<std::shared_ptr<timeline_entries::Base>> m_active_entries;

        app::GameObject* m_attached;
        app::Vector3 m_attach_offset;

        TimelineState m_state;
        int m_entry;
        bool m_started;
    };

    CORE_DLLEXPORT std::unique_ptr<Timeline> load_timeline(std::string path);
    CORE_DLLEXPORT std::unique_ptr<Timeline> copy_timeline(std::unique_ptr<Timeline> const& value);
    extern CachedLoader<std::unique_ptr<Timeline>, std::unique_ptr<Timeline> const&, load_timeline, copy_timeline> timeline_cache;
} // namespace core::animation
