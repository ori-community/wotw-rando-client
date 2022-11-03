#pragma once

namespace tas::runtime::timeline::entries {
    enum class TimelineEntryType {
        Action,
        Axis,
        MousePosition,
    };

    class TimelineEntry {
    public:
        unsigned long frame = 0;
        virtual TimelineEntryType type() = 0;

        explicit TimelineEntry(unsigned long frame) :
                frame(frame) {}

        virtual void activate(){};
        virtual void process(unsigned long next_frame){};
        virtual bool is_still_active(unsigned long next_frame) { return false; };
        virtual void deactivate(){};
    };

    class FixedDurationTimelineEntry : public TimelineEntry {
    public:
        unsigned long duration = 1;
        unsigned long last_frame();

        FixedDurationTimelineEntry(unsigned long frame, unsigned long duration) :
                duration(duration), TimelineEntry(frame) {}

        bool is_still_active(unsigned long next_frame) override;
    };
} // namespace tas::runtime::timeline::entries