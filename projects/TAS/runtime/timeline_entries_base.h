#pragma once

#include <nlohmann/json.hpp>

namespace tas::runtime::timeline::entries {
    enum class TimelineEntryType {
        Invalid = -1,
        Action,
        Angle,
        Axis,
        MouseAngle,
        MousePosition,
        Position,
        RNGSeed,
    };

    NLOHMANN_JSON_SERIALIZE_ENUM(
            TimelineEntryType,
            {
                    { TimelineEntryType::Invalid, nullptr },
                    { TimelineEntryType::Action, "Action" },
                    { TimelineEntryType::Angle, "Angle" },
                    { TimelineEntryType::Axis, "Axis" },
                    { TimelineEntryType::MouseAngle, "MouseAngle" },
                    { TimelineEntryType::MousePosition, "MousePosition" },
                    { TimelineEntryType::Position, "Position" },
                    { TimelineEntryType::RNGSeed, "RNGSeed" },
            }
    );

    class TimelineEntry {
    public:
        unsigned long index = 0;
        unsigned long frame = 0;
        virtual TimelineEntryType type() = 0;

        explicit TimelineEntry(unsigned long frame) :
                frame(frame) {}

        virtual void activate(){};
        virtual void process(unsigned long next_frame){};
        virtual bool is_active_on_frame(unsigned long f) { return f == frame; };
        virtual void deactivate(){};

        /**
         * Returns the last frame this entry should play on.
         * The return value must not change.
         * @return
         */
        virtual unsigned long last_frame() { return frame; };
    };

    class FixedDurationTimelineEntry : public TimelineEntry {
    public:
        unsigned long duration = 1;

        FixedDurationTimelineEntry(unsigned long frame, unsigned long duration) :
                duration(duration), TimelineEntry(frame) {}

        bool is_active_on_frame(unsigned long f) override;
        unsigned long last_frame() override;
    };
} // namespace tas::runtime::timeline::entries