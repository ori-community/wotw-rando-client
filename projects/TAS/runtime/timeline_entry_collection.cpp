#include <TAS/runtime/timeline_entry_collection.h>

namespace tas::runtime::timeline {
    void TimelineEntryCollection::add(const std::shared_ptr<TimelineEntry>& entry) {
        this->_timeline_entries_by_first_frame.insert({ entry->frame, entry });
        this->_timeline_entries_by_last_frame.insert({ entry->last_frame(), entry });

        if (entry->type() == entries::TimelineEntryType::RNGState) {
            this->_rng_state_entries_by_frame.insert({ entry->frame, std::dynamic_pointer_cast<RNGStateTimelineEntry>(entry) });
        }
    }

    const std::multimap<unsigned long, std::shared_ptr<TimelineEntry>, std::less<>>& TimelineEntryCollection::by_first_frame() const {
        return this->_timeline_entries_by_first_frame;
    }

    const std::multimap<unsigned long, std::shared_ptr<TimelineEntry>, std::less<>>& TimelineEntryCollection::by_last_frame() const {
        return this->_timeline_entries_by_last_frame;
    }

    const std::map<unsigned long, std::shared_ptr<RNGStateTimelineEntry>, std::less<>>& TimelineEntryCollection::rng_state_entries_by_frame() const {
        return this->_rng_state_entries_by_frame;
    }

    void TimelineEntryCollection::clear() {
        this->_timeline_entries_by_first_frame.clear();
        this->_timeline_entries_by_last_frame.clear();
        this->_rng_state_entries_by_frame.clear();
    }
} // namespace tas::runtime::timeline