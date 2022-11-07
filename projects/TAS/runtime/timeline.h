#pragma once

#include <Core/enums/actions.h>
#include <Core/enums/controller_axis.h>
#include <TAS/runtime/timeline_entries.h>
#include <TAS/runtime/timeline_entry_collection.h>
#include <vector>

namespace tas::runtime::timeline {
    using namespace entries;

    class Timeline {
    private:
        unsigned long current_frame = 0;
        unsigned long next_frame = 0;
        unsigned int fps = 60;
        float delta_time = 1.f / (float)fps;

        TimelineEntryCollection timeline_entries;

        /**
         * Vector of currently active timeline entries
         */
        std::vector<std::shared_ptr<TimelineEntry>> active_timeline_entries;

        void deactivate_all_entries();
        void deactivate_done_entries(unsigned long frame);
        void activate_entries_starting_on_frame(unsigned long frame);
        void activate_entries_starting_on_or_before_frame(unsigned long frame);

    public:
        unsigned long get_current_frame();
        unsigned long get_next_frame();
        unsigned int get_fps();
        float get_delta_time();
        float get_current_time();
        void set_fps(unsigned int value);
        void load_entries(std::vector<std::shared_ptr<TimelineEntry>> entries);
        void rewind();
        void advance();
        void seek(unsigned long frame);
    };
} // namespace tas::runtime::timeline