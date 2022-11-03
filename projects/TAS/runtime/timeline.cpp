#include <TAS/runtime/timeline.h>

namespace tas::runtime::timeline {
    void Timeline::load_entries(std::vector<std::shared_ptr<TimelineEntry>> entries) {
        this->active_timeline_entries.clear();
        this->timeline_entries.clear();

        for (const auto& entry : entries) {
            this->timeline_entries.insert({ entry->frame, entry });
        }

        rewind();
    }

    void Timeline::update() {
        auto iterator = this->active_timeline_entries.begin();

        while (iterator != this->active_timeline_entries.end()) {
            auto entry = *iterator;

            if (!entry->is_still_active(next_frame)) {
                entry->deactivate();
                iterator = this->active_timeline_entries.erase(iterator);
            } else {
                entry->process(next_frame);
                ++iterator;
            }
        }

        auto current_frame_items_range = this->timeline_entries.equal_range(this->next_frame);

        for (auto it = current_frame_items_range.first; it != current_frame_items_range.second; ++it) {
            auto entry = it->second;
            entry->activate();
            entry->process(this->next_frame);

            active_timeline_entries.push_back(entry);
        }
    }

    unsigned int Timeline::get_fps() {
        return this->fps;
    }

    float Timeline::get_delta_time() {
        return this->delta_time;
    }

    void Timeline::set_fps(unsigned int fps) {
        this->fps = fps;
        this->delta_time = 1.f / (float)fps;
    }

    void Timeline::rewind() {
        for (const auto& item : this->active_timeline_entries) {
            item->deactivate();
        }

        this->active_timeline_entries.clear();

        this->next_frame = 0;
    }

    void Timeline::advance() {
        this->update();
        ++this->next_frame;
    }
}