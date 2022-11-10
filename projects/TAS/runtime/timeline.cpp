#include <TAS/runtime/timeline.h>

#include <Common/ext.h>

namespace tas::runtime::timeline {
    void Timeline::load_entries(const std::vector<std::shared_ptr<TimelineEntry>>& entries) {
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
            entry->deactivate(this->state);
            iterator = this->active_timeline_entries.erase(iterator);
        }
    }

    void Timeline::deactivate_done_entries(unsigned long frame) {
        auto iterator = this->active_timeline_entries.begin();

        while (iterator != this->active_timeline_entries.end()) {
            auto entry = *iterator;

            if (!entry->is_active_on_frame(frame)) {
                entry->deactivate(this->state);
                iterator = this->active_timeline_entries.erase(iterator);
            } else {
                entry->process(this->state, frame);
                ++iterator;
            }
        }
    }

    void Timeline::activate_entries_starting_on_frame(unsigned long frame) {
        auto current_frame_items_range = this->timeline_entries.by_first_frame().equal_range(frame);

        for (auto it = current_frame_items_range.first; it != current_frame_items_range.second; ++it) {
            auto entry = it->second;

            entry->activate(this->state);
            entry->process(this->state, frame);

            active_timeline_entries.push_back(entry);
        }
    }

    void Timeline::activate_entries_starting_on_or_before_frame(unsigned long frame) {
        for (auto it = this->timeline_entries.by_last_frame().upper_bound(frame); it != this->timeline_entries.by_last_frame().end(); ++it) {
            auto entry = it->second;

            if (entry->frame <= frame) {
                entry->activate(this->state);
                entry->process(this->state, frame);

                active_timeline_entries.push_back(entry);
            }
        }
    }

    void Timeline::seek_rng_state_on_frame(unsigned long frame) {
        auto rng_state_entries_by_frame = this->timeline_entries.rng_state_entries_by_frame();

        std::map<unsigned long, std::shared_ptr<RNGStateTimelineEntry>>::const_reverse_iterator last_rng_state_entry_it(rng_state_entries_by_frame.upper_bound(frame));

        if (last_rng_state_entry_it == rng_state_entries_by_frame.rend()) {
            // There is no preceding RNGState entry...
            this->state.current_rng_state = static_cast<int>(frame);
            return;
        }

        // ...we found a preceding entry, calculate the RNG state off of that
        auto last_rng_state_entry = last_rng_state_entry_it->second;
        this->state.current_rng_state = last_rng_state_entry->state + static_cast<int>(frame - last_rng_state_entry->frame);
    }

    unsigned long Timeline::get_current_frame() const {
        return this->current_frame;
    }

    unsigned long Timeline::get_next_frame() const {
        return this->next_frame;
    }

    unsigned int Timeline::get_fps() const {
        return this->fps;
    }

    float Timeline::get_delta_time() const {
        return this->delta_time;
    }

    float Timeline::get_current_time() const {
        return static_cast<float>(this->current_frame) * delta_time;
    }

    const TimelineState& Timeline::get_state() const {
        return this->state;
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
        ++this->state.current_rng_state;
        this->deactivate_done_entries(this->current_frame);
        this->activate_entries_starting_on_frame(this->current_frame);
        ++this->next_frame;
    }

    void Timeline::seek(unsigned long frame) {
        this->current_frame = frame;
        this->deactivate_all_entries();
        this->activate_entries_starting_on_or_before_frame(frame);
        this->seek_rng_state_on_frame(frame);
        this->next_frame = frame + 1;
    }
}