#pragma once

#include <Core/enums/actions.h>
#include <Core/enums/controller_axis.h>
#include <TAS/runtime/timeline_entries.h>
#include <vector>

namespace tas::runtime::timeline {
    using namespace entries;

    class Timeline {
    private:
        unsigned long next_frame = 0;
        unsigned int fps = 60;
        float delta_time = 1.f / (float)fps;

        /**
         * Map of frame -> vector<TimelineEntry>, sorted by frame
         */
        std::multimap<unsigned long, std::shared_ptr<TimelineEntry>, std::less<>> timeline_entries;

        /**
         * Vector of currently active timeline entries
         */
        std::vector<std::shared_ptr<TimelineEntry>> active_timeline_entries;

        /**
         * Processes timeline entries.
         */
        void update();
    public:
        unsigned int get_fps();
        float get_delta_time();
        void set_fps(unsigned int fps);
        void load_entries(std::vector<std::shared_ptr<TimelineEntry>> entries);
        void rewind();
        void advance();
    };
}