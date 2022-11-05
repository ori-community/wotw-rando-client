#include <TAS/runtime/timeline.h>

#include <Common/ext.h>

namespace tas::runtime::timeline {
    void Timeline::load_entries(std::vector<std::shared_ptr<TimelineEntry>> entries) {
        this->deactivate_all_entries();

        this->active_timeline_entries.clear();
        this->timeline_entries.clear();

        unsigned long next_index = 0;
        for (const auto& entry : entries) {
            entry->index = ++next_index;
            this->timeline_entries.add(entry);
        }
    }

    void Timeline::deactivate_all_entries() {
        auto iterator = this->active_timeline_entries.begin();

        while (iterator != this->active_timeline_entries.end()) {
            auto entry = *iterator;
            entry->deactivate();
            iterator = this->active_timeline_entries.erase(iterator);
        }
    }

    void Timeline::deactivate_done_entries(unsigned long frame) {
        auto iterator = this->active_timeline_entries.begin();

        while (iterator != this->active_timeline_entries.end()) {
            auto entry = *iterator;

            if (!entry->is_active_on_frame(frame)) {
                entry->deactivate();
                iterator = this->active_timeline_entries.erase(iterator);
            } else {
                entry->process(frame);
                ++iterator;
            }
        }
    }

    void Timeline::activate_entries_starting_on_frame(unsigned long frame) {
        auto current_frame_items_range = this->timeline_entries.by_first_frame().equal_range(frame);

        for (auto it = current_frame_items_range.first; it != current_frame_items_range.second; ++it) {
            auto entry = it->second;

            entry->activate();
            entry->process(frame);

            active_timeline_entries.push_back(entry);
        }
    }

    void Timeline::activate_entries_starting_before_frame(unsigned long frame) {
        for (auto it = this->timeline_entries.by_last_frame().upper_bound(frame); it != this->timeline_entries.by_last_frame().end(); ++it) {
            auto entry = it->second;

            if (entry->frame >= frame) {
                entry->activate();
                entry->process(frame);

                active_timeline_entries.push_back(entry);
            }
        }
    }

    unsigned int Timeline::get_fps() {
        return this->fps;
    }

    float Timeline::get_delta_time() {
        return this->delta_time;
    }

    void Timeline::set_fps(unsigned int value) {
        this->fps = value;
        this->delta_time = 1.f / (float)value;
    }

    void Timeline::rewind() {
        this->deactivate_all_entries();
        this->active_timeline_entries.clear();

        this->current_frame = 0;
        this->next_frame = 0;
    }

    void Timeline::advance() {
        this->current_frame = this->next_frame;
        this->deactivate_done_entries(this->current_frame);
        this->activate_entries_starting_on_frame(this->current_frame);
        ++this->next_frame;
    }

    void Timeline::seek(unsigned long frame) {
        this->deactivate_all_entries();
        this->activate_entries_starting_on_frame(frame);
        this->activate_entries_starting_before_frame(frame);
    }
}