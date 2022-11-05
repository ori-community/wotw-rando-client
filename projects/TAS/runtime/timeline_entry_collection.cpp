#include <TAS/runtime/timeline_entry_collection.h>

namespace tas::runtime::timeline {
    void TimelineEntryCollection::add(const std::shared_ptr<TimelineEntry>& entry) {
        this->timeline_entries_by_first_frame.insert({ entry->frame, entry });
        this->timeline_entries_by_last_frame.insert({ entry->last_frame(), entry });
    }

    const std::multimap<unsigned long, std::shared_ptr<TimelineEntry>, std::less<>>& TimelineEntryCollection::by_first_frame() const {
        return this->timeline_entries_by_first_frame;
    }

    const std::multimap<unsigned long, std::shared_ptr<TimelineEntry>, std::less<>>& TimelineEntryCollection::by_last_frame() const {
        return this->timeline_entries_by_last_frame;
    }

    void TimelineEntryCollection::clear() {
        this->timeline_entries_by_first_frame.clear();
        this->timeline_entries_by_last_frame.clear();
    }
}