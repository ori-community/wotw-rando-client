#pragma once

#include <TAS/runtime/timeline_state.h>
#include <nlohmann/json.hpp>

namespace tas::runtime::timeline::entries {
    enum class TimelineEntryType {
        Invalid = -1,
        Action,
        Angle,
        Axis,
        GameReload,
        MouseAngle,
        MousePosition,
        Position,
        RNGState,
    };

    NLOHMANN_JSON_SERIALIZE_ENUM(
            TimelineEntryType,
            {
                    { TimelineEntryType::Invalid, nullptr },
                    { TimelineEntryType::Action, "Action" },
                    { TimelineEntryType::Angle, "Angle" },
                    { TimelineEntryType::Axis, "Axis" },
                    { TimelineEntryType::GameReload, "GameReload" },
                    { TimelineEntryType::MouseAngle, "MouseAngle" },
                    { TimelineEntryType::MousePosition, "MousePosition" },
                    { TimelineEntryType::Position, "Position" },
                    { TimelineEntryType::RNGState, "RNGState" },
            }
    );

    class TimelineEntry {
    public:
        unsigned long index = 0;
        unsigned long frame = 0;
        virtual TimelineEntryType type() = 0;

        explicit TimelineEntry(unsigned long frame) :
                frame(frame) {}

        virtual ~TimelineEntry() = default;

        virtual void activate(TimelineState& timeline_state){};
        virtual void process(TimelineState& timeline_state){};
        virtual bool is_active_on_frame(unsigned long f) { return f == frame; };
        virtual void deactivate(TimelineState& timeline_state){};

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
                TimelineEntry(frame), duration(duration) {}

        bool is_active_on_frame(unsigned long f) override;
        unsigned long last_frame() override;
    };
} // namespace tas::runtime::timeline::entries