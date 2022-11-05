#pragma once

#include <TAS/runtime/timeline_entries.h>

#include <map>

namespace tas::runtime::timeline {
    using namespace entries;

    class TimelineEntryCollection {
    private:
        /**
             * MultiMap of frame -> TimelineEntry, sorted by frame
         */
        std::multimap<unsigned long, std::shared_ptr<TimelineEntry>, std::less<>> timeline_entries_by_first_frame;

        /**
             * MultiMap of last_frame -> TimelineEntry, sorted by last_frame
         */
        std::multimap<unsigned long, std::shared_ptr<TimelineEntry>, std::less<>> timeline_entries_by_last_frame;
    public:
        void add(const std::shared_ptr<TimelineEntry>& entry);
        const std::multimap<unsigned long, std::shared_ptr<TimelineEntry>, std::less<>>& by_first_frame() const;
        const std::multimap<unsigned long, std::shared_ptr<TimelineEntry>, std::less<>>& by_last_frame() const;
        void clear();
    };
}