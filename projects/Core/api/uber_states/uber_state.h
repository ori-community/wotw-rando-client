#pragma once

#include <Core/enums/uber_state.h>
#include <Core/macros.h>
#include <Modloader/app/structs/AbilityType__Enum.h>
#include <Modloader/app/structs/IUberState.h>
#include <Modloader/app/structs/SerializedBooleanUberState.h>
#include <Modloader/app/structs/SerializedByteUberState.h>
#include <Modloader/app/structs/SerializedFloatUberState.h>
#include <Modloader/app/structs/SerializedIntUberState.h>

#include <functional>

namespace core::api::uber_states {
    class CORE_DLLEXPORT UberState {
    public:
        UberState();
        UberState(int group, int state);
        UberState(UberStateGroup group, int state);
        UberState(UberStateGroup group, app::AbilityType__Enum state);

        UberState(app::IUberState* state); // NOLINT
        UberState(app::SerializedBooleanUberState* state) // NOLINT
                : UberState(reinterpret_cast<app::IUberState*>(state)) {}
        UberState(app::SerializedByteUberState* state) // NOLINT
                : UberState(reinterpret_cast<app::IUberState*>(state)) {}
        UberState(app::SerializedIntUberState* state) // NOLINT
                : UberState(reinterpret_cast<app::IUberState*>(state)) {}
        UberState(app::SerializedFloatUberState* state) // NOLINT
                : UberState(reinterpret_cast<app::IUberState*>(state)) {}

        [[nodiscard]] bool valid() const;

        void set(double value) const;

        template <typename T = double>
        T get() const { return static_cast<T>(inner_get()); }

        template <typename T>
        void set(T value) const {
            set(static_cast<double>(value));
        }

        [[nodiscard]] UberStateGroup group() const { return m_group; }
        [[nodiscard]] int group_int() const { return static_cast<int>(m_group); }
        [[nodiscard]] int state() const { return m_state; }

        [[nodiscard]] std::string group_name() const;
        [[nodiscard]] std::string state_name() const;

        template <typename T>
        T* ptr() const { return reinterpret_cast<T*>(ptr()); }

        void apply() const;
        [[nodiscard]] app::IUberState* ptr() const;

        [[nodiscard]] std::string string_value() const;
        [[nodiscard]] UberStateType type() const;
        [[nodiscard]] ValueType value_type() const;
        [[nodiscard]] bool readonly() const;

        std::string to_string(bool use_names = false, std::optional<double> previous_value = std::nullopt, std::optional<double> current_value = std::nullopt) const;
    private:
        [[nodiscard]] double inner_get() const;

        bool has_volatile_value() const;

        mutable std::optional<UberStateType> m_type;
        UberStateGroup m_group;
        int m_state;
    };

    template <>
    [[nodiscard]] inline bool UberState::get() const { return inner_get() > 0.5; }

    CORE_DLLEXPORT bool operator==(UberState const& a, UberState const& b);
} // namespace core::api::uber_states

template <>
struct std::hash<core::api::uber_states::UberState> {
    std::size_t operator()(const core::api::uber_states::UberState& s) const noexcept {
        return hash<UberStateGroup>()(s.group()) ^ (hash<int>()(s.state()) << 1);
    }
};
