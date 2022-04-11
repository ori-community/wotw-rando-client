#pragma once

#include <randomizer/animation/animation.h>
#include <randomizer/animation/timeline_entries/base.h>
#include <randomizer/cached_loader.h>
#include <randomizer/messages.h>
#include <randomizer/sound.h>

#include <unordered_map>
#include <variant>

namespace randomizer
{
    struct TimelineState
    {
        float time = 0;
        std::unordered_map<int, std::shared_ptr<Animation>> active_animations;
        std::unordered_map<int, std::shared_ptr<SoundActor>> active_sounds;
        std::unordered_map<int, std::shared_ptr<TextBox>> active_text;
    };

    class Timeline
    {
    public:
        Timeline(std::vector<std::shared_ptr<timeline_entries::Base>> entries);
        Timeline(Timeline const& other);

        void start(app::GameObject* root = nullptr);
        void update(float dt);
        void stop();

        bool is_finished() { return !started; }
    private:
        std::vector<std::shared_ptr<timeline_entries::Base>> entries;
        std::vector<std::shared_ptr<timeline_entries::Base>> active_entries;

        TimelineState state;
        int entry;
        bool started;
    };

    std::unique_ptr<Timeline>&& load_timeline(std::string path);
    std::unique_ptr<Timeline>&& copy_timeline(std::unique_ptr<Timeline> const& value);
    extern CachedLoader<std::unique_ptr<Timeline>, load_timeline, copy_timeline> timeline_cache;
}
