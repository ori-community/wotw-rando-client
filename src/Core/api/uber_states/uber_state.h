#pragma once
#include <Core/macros.h>
#include <Modloader/app/methods/Moon/UberStateCollection.h>
#include <Modloader/modloader.h>
#include <type_traits>
#include <Core/api/uber_states/uber_state_prelude.h>
#include <Core/api/uber_states/uber_state_virtual.h>


namespace core::api::uber_states {
    namespace events {
        struct BeforeUberStateChange {
            const double new_value;

            /** True if this uber state change should be prevented (i.e. no change happens) */
            bool& prevent_change;

            explicit BeforeUberStateChange(const double new_value, bool& prevent_change) :
                new_value(new_value),
                prevent_change(prevent_change) {}
        };

        struct UberStateChanged {};

        using bus_t = common::DiscriminatingEventBus<
            UntypedUberId,
            BeforeUberStateChange,
            UberStateChanged
        >;
    }

    CORE_DLLEXPORT events::bus_t& event_bus();

    CORE_DLLEXPORT void apply_uber_state(app::IUberState* native_ptr);

    template<const UberStateType ID_TYPE>
    UberId<ID_TYPE>::value_t get_uber_state_value(const UberId<ID_TYPE>& id, typename UberId<ID_TYPE>::native_t* native_ptr);

    template<const UberStateType ID_TYPE>
    void set_uber_state_value(const UberId<ID_TYPE>& id, typename UberId<ID_TYPE>::native_t* native_ptr, typename UberId<ID_TYPE>::value_t value);

    template<>
    CORE_DLLEXPORT UberId<UberStateType::BooleanUberState>::value_t get_uber_state_value(const UberId<UberStateType::BooleanUberState>& id, UberId<UberStateType::BooleanUberState>::native_t* native_ptr);

    template<>
    CORE_DLLEXPORT UberId<UberStateType::ByteUberState>::value_t get_uber_state_value(const UberId<UberStateType::ByteUberState>& id, UberId<UberStateType::ByteUberState>::native_t* native_ptr);

    template<>
    CORE_DLLEXPORT UberId<UberStateType::IntUberState>::value_t get_uber_state_value(const UberId<UberStateType::IntUberState>& id, UberId<UberStateType::IntUberState>::native_t* native_ptr);

    template<>
    CORE_DLLEXPORT UberId<UberStateType::FloatUberState>::value_t get_uber_state_value(const UberId<UberStateType::FloatUberState>& id, UberId<UberStateType::FloatUberState>::native_t* native_ptr);

    template<>
    CORE_DLLEXPORT UberId<UberStateType::SerializedBooleanUberState>::value_t get_uber_state_value(const UberId<UberStateType::SerializedBooleanUberState>& id, UberId<UberStateType::SerializedBooleanUberState>::native_t* native_ptr);

    template<>
    CORE_DLLEXPORT UberId<UberStateType::SerializedByteUberState>::value_t get_uber_state_value(const UberId<UberStateType::SerializedByteUberState>& id, UberId<UberStateType::SerializedByteUberState>::native_t* native_ptr);

    template<>
    CORE_DLLEXPORT UberId<UberStateType::SerializedIntUberState>::value_t get_uber_state_value(const UberId<UberStateType::SerializedIntUberState>& id, UberId<UberStateType::SerializedIntUberState>::native_t* native_ptr);

    template<>
    CORE_DLLEXPORT UberId<UberStateType::SerializedFloatUberState>::value_t get_uber_state_value(const UberId<UberStateType::SerializedFloatUberState>& id, UberId<UberStateType::SerializedFloatUberState>::native_t* native_ptr);

    template<>
    CORE_DLLEXPORT UberId<UberStateType::VirtualBooleanUberState>::value_t get_uber_state_value(const UberId<UberStateType::VirtualBooleanUberState>& id, UberId<UberStateType::VirtualBooleanUberState>::native_t* native_ptr);

    template<>
    CORE_DLLEXPORT UberId<UberStateType::VirtualByteUberState>::value_t get_uber_state_value(const UberId<UberStateType::VirtualByteUberState>& id, UberId<UberStateType::VirtualByteUberState>::native_t* native_ptr);

    template<>
    CORE_DLLEXPORT UberId<UberStateType::VirtualIntUberState>::value_t get_uber_state_value(const UberId<UberStateType::VirtualIntUberState>& id, UberId<UberStateType::VirtualIntUberState>::native_t* native_ptr);

    template<>
    CORE_DLLEXPORT UberId<UberStateType::VirtualFloatUberState>::value_t get_uber_state_value(const UberId<UberStateType::VirtualFloatUberState>& id, UberId<UberStateType::VirtualFloatUberState>::native_t* native_ptr);

    template<>
    CORE_DLLEXPORT UberId<UberStateType::ReadOnlyVirtualBooleanUberState>::value_t get_uber_state_value(const UberId<UberStateType::ReadOnlyVirtualBooleanUberState>& id, UberId<UberStateType::ReadOnlyVirtualBooleanUberState>::native_t* native_ptr);

    template<>
    CORE_DLLEXPORT UberId<UberStateType::ReadOnlyVirtualByteUberState>::value_t get_uber_state_value(const UberId<UberStateType::ReadOnlyVirtualByteUberState>& id, UberId<UberStateType::ReadOnlyVirtualByteUberState>::native_t* native_ptr);

    template<>
    CORE_DLLEXPORT UberId<UberStateType::ReadOnlyVirtualIntUberState>::value_t get_uber_state_value(const UberId<UberStateType::ReadOnlyVirtualIntUberState>& id, UberId<UberStateType::ReadOnlyVirtualIntUberState>::native_t* native_ptr);

    template<>
    CORE_DLLEXPORT UberId<UberStateType::ReadOnlyVirtualFloatUberState>::value_t get_uber_state_value(const UberId<UberStateType::ReadOnlyVirtualFloatUberState>& id, UberId<UberStateType::ReadOnlyVirtualFloatUberState>::native_t* native_ptr);

    template<>
    CORE_DLLEXPORT UberId<UberStateType::SavePedestalUberState>::value_t get_uber_state_value(const UberId<UberStateType::SavePedestalUberState>& id, UberId<UberStateType::SavePedestalUberState>::native_t* native_ptr);

    template<>
    CORE_DLLEXPORT UberId<UberStateType::CountUberState>::value_t get_uber_state_value(const UberId<UberStateType::CountUberState>& id, UberId<UberStateType::CountUberState>::native_t* native_ptr);

    template<>
    CORE_DLLEXPORT UberId<UberStateType::ConditionUberState>::value_t get_uber_state_value(const UberId<UberStateType::ConditionUberState>& id, UberId<UberStateType::ConditionUberState>::native_t* native_ptr);

    template<>
    CORE_DLLEXPORT void set_uber_state_value(const UberId<UberStateType::BooleanUberState>& id, UberId<UberStateType::BooleanUberState>::native_t* native_ptr, UberId<UberStateType::BooleanUberState>::value_t value);

    template<>
    CORE_DLLEXPORT void set_uber_state_value(const UberId<UberStateType::ByteUberState>& id, UberId<UberStateType::ByteUberState>::native_t* native_ptr, UberId<UberStateType::ByteUberState>::value_t value);

    template<>
    CORE_DLLEXPORT void set_uber_state_value(const UberId<UberStateType::IntUberState>& id, UberId<UberStateType::IntUberState>::native_t* native_ptr, UberId<UberStateType::IntUberState>::value_t value);

    template<>
    CORE_DLLEXPORT void set_uber_state_value(const UberId<UberStateType::FloatUberState>& id, UberId<UberStateType::FloatUberState>::native_t* native_ptr, UberId<UberStateType::FloatUberState>::value_t value);

    template<>
    CORE_DLLEXPORT void set_uber_state_value(const UberId<UberStateType::SerializedBooleanUberState>& id, UberId<UberStateType::SerializedBooleanUberState>::native_t* native_ptr, UberId<UberStateType::SerializedBooleanUberState>::value_t value);

    template<>
    CORE_DLLEXPORT void set_uber_state_value(const UberId<UberStateType::SerializedFloatUberState>& id, UberId<UberStateType::SerializedFloatUberState>::native_t* native_ptr, UberId<UberStateType::SerializedFloatUberState>::value_t value);

    template<>
    CORE_DLLEXPORT void set_uber_state_value(const UberId<UberStateType::SerializedIntUberState>& id, UberId<UberStateType::SerializedIntUberState>::native_t* native_ptr, UberId<UberStateType::SerializedIntUberState>::value_t value);

    template<>
    CORE_DLLEXPORT void set_uber_state_value(const UberId<UberStateType::SerializedByteUberState>& id, UberId<UberStateType::SerializedByteUberState>::native_t* native_ptr, UberId<UberStateType::SerializedByteUberState>::value_t value);

    template<>
    CORE_DLLEXPORT void set_uber_state_value(const UberId<UberStateType::VirtualBooleanUberState>& id, UberId<UberStateType::VirtualBooleanUberState>::native_t* native_ptr, UberId<UberStateType::VirtualBooleanUberState>::value_t value);

    template<>
    CORE_DLLEXPORT void set_uber_state_value(const UberId<UberStateType::VirtualFloatUberState>& id, UberId<UberStateType::VirtualFloatUberState>::native_t* native_ptr, UberId<UberStateType::VirtualFloatUberState>::value_t value);

    template<>
    CORE_DLLEXPORT void set_uber_state_value(const UberId<UberStateType::VirtualIntUberState>& id, UberId<UberStateType::VirtualIntUberState>::native_t* native_ptr, UberId<UberStateType::VirtualIntUberState>::value_t value);

    template<>
    CORE_DLLEXPORT void set_uber_state_value(const UberId<UberStateType::VirtualByteUberState>& id, UberId<UberStateType::VirtualByteUberState>::native_t* native_ptr, UberId<UberStateType::VirtualByteUberState>::value_t value);

    template<>
    CORE_DLLEXPORT void set_uber_state_value(const UberId<UberStateType::SavePedestalUberState>& id, UberId<UberStateType::SavePedestalUberState>::native_t* native_ptr, UberId<UberStateType::SavePedestalUberState>::value_t value);

    CORE_DLLEXPORT app::UberID create_uber_id(int id);

    CORE_DLLEXPORT app::UberID* create_uber_id_ptr(int id);

    CORE_DLLEXPORT app::UberStateGroup* create_uber_state_group(int group_id, const std::string& group_name);

    template<const UberStateType TYPE>
    app::IUberState* create_uber_state(app::UberStateGroup* group, int state_id, const std::string& state_name, typename UberId<TYPE>::value_t default_value);

    extern template CORE_DLLEXPORT app::IUberState* create_uber_state<UberStateType::BooleanUberState>(app::UberStateGroup* group, int state_id, const std::string& state_name, UberId<UberStateType::BooleanUberState>::value_t default_value);
    extern template CORE_DLLEXPORT app::IUberState* create_uber_state<UberStateType::ByteUberState>(app::UberStateGroup* group, int state_id, const std::string& state_name, UberId<UberStateType::ByteUberState>::value_t default_value);
    extern template CORE_DLLEXPORT app::IUberState* create_uber_state<UberStateType::IntUberState>(app::UberStateGroup* group, int state_id, const std::string& state_name, UberId<UberStateType::IntUberState>::value_t default_value);
    extern template CORE_DLLEXPORT app::IUberState* create_uber_state<UberStateType::FloatUberState>(app::UberStateGroup* group, int state_id, const std::string& state_name, UberId<UberStateType::FloatUberState>::value_t default_value);
    extern template CORE_DLLEXPORT app::IUberState* create_uber_state<UberStateType::SerializedBooleanUberState>(app::UberStateGroup* group, int state_id, const std::string& state_name, UberId<UberStateType::SerializedBooleanUberState>::value_t default_value);
    extern template CORE_DLLEXPORT app::IUberState* create_uber_state<UberStateType::SerializedByteUberState>(app::UberStateGroup* group, int state_id, const std::string& state_name, UberId<UberStateType::SerializedByteUberState>::value_t default_value);
    extern template CORE_DLLEXPORT app::IUberState* create_uber_state<UberStateType::SerializedIntUberState>(app::UberStateGroup* group, int state_id, const std::string& state_name, UberId<UberStateType::SerializedIntUberState>::value_t default_value);
    extern template CORE_DLLEXPORT app::IUberState* create_uber_state<UberStateType::SerializedFloatUberState>(app::UberStateGroup* group, int state_id, const std::string& state_name, UberId<UberStateType::SerializedFloatUberState>::value_t default_value);

    template<const UberId ID>
    class StaticUberState {
    public:
        using id_t = decltype(ID);
        using value_t = id_t::value_t;
        using native_t = id_t::native_t;

        StaticUberState() {
            initialize_native_ptr_when_uber_states_initialized();
        }

        value_t get() {
            return get_uber_state_value(ID, m_native_ptr);
        }

        template<const UberId _ = ID, typename = std::enable_if_t<!_.IS_READ_ONLY>>
        void set(value_t value) {
            set_uber_state_value(ID, m_native_ptr, value);
        }

        static constexpr UberStateType get_type() {
            return ID.TYPE;
        }

        static constexpr bool is_read_only() {
            return ID.IS_READ_ONLY;
        }

        static constexpr const id_t& get_uber_id() {
            return ID;
        }

        void apply() const {
            apply_uber_state(reinterpret_cast<app::IUberState*>(get_native_ptr()));
        }

        constexpr operator id_t() const { // NOLINT(*-explicit-constructor)
            return get_uber_id();
        }

        constexpr operator UntypedUberId() const { // NOLINT(*-explicit-constructor)
            return UntypedUberId(get_uber_id());
        }

        void initialize_native_ptr() {
            if constexpr (is_type_virtual(ID.TYPE)) {
                return;
            }

            using namespace app::classes;
            auto group_id = create_uber_id(ID.group);
            auto member_id = create_uber_id(ID.member);

            m_native_ptr = reinterpret_cast<native_t*>(
                Moon::UberStateCollection::GetState(
                    &group_id,
                    &member_id
                )
            );

            assert(m_native_ptr != nullptr);
        }

        void initialize_native_ptr(const app::IUberState* native_ptr) {
            m_native_ptr = native_ptr;
        }

        native_t* get_native_ptr() const {
            return m_native_ptr;
        }

        StaticUberState(const StaticUberState& other) = delete;
        StaticUberState(StaticUberState&& other) noexcept = delete;
        StaticUberState& operator=(const StaticUberState& other) = delete;
        StaticUberState& operator=(StaticUberState&& other) noexcept = delete;

    private:
        void initialize_native_ptr_when_uber_states_initialized() {
            if constexpr (is_type_virtual(ID.TYPE)) {
                return;
            }

            if (modloader::are_uber_states_initialized()) {
                initialize_native_ptr();
            } else {
                m_initialize_droppable = modloader::event_bus().on<modloader::events::InitializeUberStates>([this](auto) {
                    initialize_native_ptr();
                    m_initialize_droppable = nullptr;
                });
            }
        }

        native_t* m_native_ptr = nullptr;
        common::Droppable::ptr_t m_initialize_droppable = nullptr;
    };

    template<UberId ID, UberStateType TYPE>
    concept is_same_uber_state_type = requires() {
        {TYPE == ID.TYPE};
    };

    template<const UberStateType TYPE>
    class UberState {
    public:
        using id_t = UberId<TYPE>;
        using value_t = id_t::value_t;
        using native_t = id_t::native_t;

        explicit constexpr UberState(const id_t& id) : m_id(id) {
            initialize_native_ptr_when_uber_states_initialized();
        }

        constexpr UberState(const int group, const int member) : UberState(id_t(group, member)) {}

        template<const UberId ID> requires is_same_uber_state_type<ID, TYPE>
        constexpr UberState(const StaticUberState<ID>& state) : m_id(state.get_uber_id()), m_native_ptr(state.get_native_ptr()) {
            if (m_native_ptr == nullptr) {
                initialize_native_ptr_when_uber_states_initialized();
            }
        }

        constexpr UberState(native_t* native_ptr) :
            m_id(UberId<TYPE>{native_ptr->fields._.m_id->fields.m_id, native_ptr->fields.Group->fields._.m_id->fields.m_id}),
            m_native_ptr(native_ptr) {}

        value_t get() {
            return get_uber_state_value(m_id, m_native_ptr);
        }

        template<typename = std::enable_if_t<!is_type_read_only(TYPE)>>
        void set(value_t value) {
            set_uber_state_value(m_id, m_native_ptr, value);
        }

        UberStateType get_type() const {
            return m_id.TYPE;
        }

        bool is_read_only() const {
            return m_id.IS_READ_ONLY;
        }

        const id_t& get_uber_id() const {
            return m_id;
        }

        void apply() const {
            apply_uber_state(reinterpret_cast<app::IUberState*>(get_native_ptr()));
        }

        const id_t& operator()() const {
            return get_uber_id();
        }

        void initialize_native_ptr() {
            using namespace app::classes;
            auto group_id = create_uber_id(m_id.group);
            auto member_id = create_uber_id(m_id.member);

            m_native_ptr = reinterpret_cast<native_t*>(
                Moon::UberStateCollection::GetState(
                    &group_id,
                    &member_id
                )
            );
        }

        void initialize_native_ptr(const app::IUberState* native_ptr) {
            m_native_ptr = native_ptr;
        }

        native_t* get_native_ptr() const {
            return m_native_ptr;
        }

        template<const UberStateType OTHER_TYPE>
        bool operator==(const UberState<OTHER_TYPE>& other) const {
            return m_id == other.get_uber_id();
        }

        template<const UberId OTHER_ID>
        bool operator==(const StaticUberState<OTHER_ID>& other) const {
            return m_id == other.get_uber_id();
        }

        UberState(const UberState& other) :
            m_id(other.m_id),
            m_native_ptr(other.m_native_ptr) {
            if (m_native_ptr == nullptr) {
                initialize_native_ptr_when_uber_states_initialized();
            }
        }
        UberState(UberState&& other) noexcept :
            m_id(std::move(other.m_id)),
            m_native_ptr(other.m_native_ptr),
            m_initialize_droppable(std::move(other.m_initialize_droppable)) {}
        UberState& operator=(const UberState& other) {
            if (this == &other) {
                return *this;
            }
            m_id = other.m_id;
            m_native_ptr = other.m_native_ptr;
            if (m_native_ptr == nullptr) {
                initialize_native_ptr_when_uber_states_initialized();
            }
            return *this;
        }
        UberState& operator=(UberState&& other) noexcept {
            if (this == &other) {
                return *this;
            }
            m_id = std::move(other.m_id);
            m_native_ptr = other.m_native_ptr;
            m_initialize_droppable = std::move(other.m_initialize_droppable);
            return *this;
        }

    private:
        void initialize_native_ptr_when_uber_states_initialized() {
            if (modloader::are_uber_states_initialized()) {
                initialize_native_ptr();
            } else {
                m_initialize_droppable = modloader::event_bus().on<modloader::events::InitializeUberStates>([this](auto) {
                    initialize_native_ptr();
                    m_initialize_droppable = nullptr;
                });
            }
        }

        id_t m_id;
        native_t* m_native_ptr = nullptr;
        common::Droppable::ptr_t m_initialize_droppable = nullptr;
    };

    class CORE_DLLEXPORT UntypedUberState {
    public:
        using id_t = UntypedUberId;
        using native_t = app::IUberState;

        static UntypedUberState from_native_ptr(native_t* native_ptr);

        explicit constexpr UntypedUberState(const UntypedUberId& id) : m_id(id) {
            initialize_native_ptr_when_uber_states_initialized();
        }

        constexpr UntypedUberState(const int group, const int member) : UntypedUberState(UntypedUberId(group, member)) {}

        constexpr UntypedUberState(const UntypedUberId& id, native_t* native_ptr) : m_id(id) {
            m_native_ptr = native_ptr;
        }

        template<const UberId ID>
        constexpr UntypedUberState(const StaticUberState<ID>& state) : m_id(state.get_uber_id()), m_native_ptr(reinterpret_cast<native_t*>(state.get_native_ptr())) {
            if !consteval {
                if (m_native_ptr == nullptr) {
                    initialize_native_ptr_when_uber_states_initialized();
                }
            }
        }

        template<typename T>
        T get() {
            const auto type = get_type();

            if (!type.has_value()) {
                modloader::warn("uber_state", std::format("Tried to access non existent uber state {}|{}", m_id.group, m_id.member));
                return static_cast<T>(0.0);
            }

            switch (*get_type()) {
                case UberStateType::BooleanUberState:
                    return static_cast<T>(
                        get_uber_state_value(
                            UberId<UberStateType::BooleanUberState>(m_id.group, m_id.member),
                            reinterpret_cast<app::BooleanUberState*>(m_native_ptr)
                        )
                    );
                case UberStateType::ByteUberState:
                    return static_cast<T>(
                        get_uber_state_value(
                            UberId<UberStateType::ByteUberState>(m_id.group, m_id.member),
                            reinterpret_cast<app::ByteUberState*>(m_native_ptr)
                        )
                    );
                case UberStateType::IntUberState:
                    return static_cast<T>(
                        get_uber_state_value(
                            UberId<UberStateType::IntUberState>(m_id.group, m_id.member),
                            reinterpret_cast<app::IntUberState*>(m_native_ptr)
                        )
                    );
                case UberStateType::FloatUberState:
                    return static_cast<T>(
                        get_uber_state_value(
                            UberId<UberStateType::FloatUberState>(m_id.group, m_id.member),
                            reinterpret_cast<app::FloatUberState*>(m_native_ptr)
                        )
                    );
                case UberStateType::SerializedBooleanUberState:
                    return static_cast<T>(
                        get_uber_state_value(
                            UberId<UberStateType::SerializedBooleanUberState>(m_id.group, m_id.member),
                            reinterpret_cast<app::SerializedBooleanUberState*>(m_native_ptr)
                        )
                    );
                case UberStateType::SerializedByteUberState:
                    return static_cast<T>(
                        get_uber_state_value(
                            UberId<UberStateType::SerializedByteUberState>(m_id.group, m_id.member),
                            reinterpret_cast<app::SerializedByteUberState*>(m_native_ptr)
                        )
                    );
                case UberStateType::SerializedIntUberState:
                    return static_cast<T>(
                        get_uber_state_value(
                            UberId<UberStateType::SerializedIntUberState>(m_id.group, m_id.member),
                            reinterpret_cast<app::SerializedIntUberState*>(m_native_ptr)
                        )
                    );
                case UberStateType::SerializedFloatUberState:
                    return static_cast<T>(
                        get_uber_state_value(
                            UberId<UberStateType::SerializedFloatUberState>(m_id.group, m_id.member),
                            reinterpret_cast<app::SerializedFloatUberState*>(m_native_ptr)
                        )
                    );
                case UberStateType::VirtualBooleanUberState:
                    return static_cast<T>(
                        get_uber_state_value(UberId<UberStateType::VirtualBooleanUberState>(m_id.group, m_id.member), nullptr)
                    );
                case UberStateType::VirtualByteUberState:
                    return static_cast<T>(
                        get_uber_state_value(UberId<UberStateType::VirtualByteUberState>(m_id.group, m_id.member), nullptr)
                    );
                case UberStateType::VirtualIntUberState:
                    return static_cast<T>(
                        get_uber_state_value(UberId<UberStateType::VirtualIntUberState>(m_id.group, m_id.member), nullptr)
                    );
                case UberStateType::VirtualFloatUberState:
                    return static_cast<T>(
                        get_uber_state_value(UberId<UberStateType::VirtualFloatUberState>(m_id.group, m_id.member), nullptr)
                    );
                case UberStateType::ReadOnlyVirtualBooleanUberState:
                    return static_cast<T>(
                        get_uber_state_value(UberId<UberStateType::ReadOnlyVirtualBooleanUberState>(m_id.group, m_id.member), nullptr)
                    );
                case UberStateType::ReadOnlyVirtualByteUberState:
                    return static_cast<T>(
                        get_uber_state_value(UberId<UberStateType::ReadOnlyVirtualByteUberState>(m_id.group, m_id.member), nullptr)
                    );
                case UberStateType::ReadOnlyVirtualIntUberState:
                    return static_cast<T>(
                        get_uber_state_value(UberId<UberStateType::ReadOnlyVirtualIntUberState>(m_id.group, m_id.member), nullptr)
                    );
                case UberStateType::ReadOnlyVirtualFloatUberState:
                    return static_cast<T>(
                        get_uber_state_value(UberId<UberStateType::ReadOnlyVirtualFloatUberState>(m_id.group, m_id.member), nullptr)
                    );
                case UberStateType::SavePedestalUberState:
                    return static_cast<T>(
                        get_uber_state_value(
                            UberId<UberStateType::SavePedestalUberState>(m_id.group, m_id.member),
                            reinterpret_cast<app::SavePedestalUberState*>(m_native_ptr)
                        )
                    );
                case UberStateType::CountUberState:
                    return static_cast<T>(
                        get_uber_state_value(
                            UberId<UberStateType::CountUberState>(m_id.group, m_id.member),
                            reinterpret_cast<app::CountUberState*>(m_native_ptr)
                        )
                    );
                case UberStateType::ConditionUberState:
                    return static_cast<T>(
                        get_uber_state_value(
                            UberId<UberStateType::ConditionUberState>(m_id.group, m_id.member),
                            reinterpret_cast<app::ConditionUberState*>(m_native_ptr)
                        )
                    );
            }

            throw std::runtime_error("Tried to access value of untyped uber state of unknown type");
        }

        template<typename T>
        void set(T value) {
            const auto type = get_type();

            if (!type.has_value()) {
                modloader::warn("uber_state", std::format("Tried to set non existent uber state {}|{}", m_id.group, m_id.member));
                return;
            }

            switch (*type) {
                case UberStateType::BooleanUberState:
                    set_uber_state_value<UberStateType::BooleanUberState>(
                        UberId<UberStateType::BooleanUberState>(m_id.group, m_id.member),
                        reinterpret_cast<app::BooleanUberState*>(m_native_ptr),
                        static_cast<UberId<UberStateType::BooleanUberState>::value_t>(value)
                    );
                    return;
                case UberStateType::ByteUberState:
                    set_uber_state_value<UberStateType::ByteUberState>(
                        UberId<UberStateType::ByteUberState>(m_id.group, m_id.member),
                        reinterpret_cast<app::ByteUberState*>(m_native_ptr),
                        static_cast<UberId<UberStateType::ByteUberState>::value_t>(value)
                    );
                    return;
                case UberStateType::IntUberState:
                    set_uber_state_value<UberStateType::IntUberState>(
                        UberId<UberStateType::IntUberState>(m_id.group, m_id.member),
                        reinterpret_cast<app::IntUberState*>(m_native_ptr),
                        static_cast<UberId<UberStateType::IntUberState>::value_t>(value)
                    );
                    return;
                case UberStateType::FloatUberState:
                    set_uber_state_value<UberStateType::FloatUberState>(
                        UberId<UberStateType::FloatUberState>(m_id.group, m_id.member),
                        reinterpret_cast<app::FloatUberState*>(m_native_ptr),
                        static_cast<UberId<UberStateType::FloatUberState>::value_t>(value)
                    );
                    return;
                case UberStateType::SerializedBooleanUberState:
                    set_uber_state_value<UberStateType::SerializedBooleanUberState>(
                        UberId<UberStateType::SerializedBooleanUberState>(m_id.group, m_id.member),
                        reinterpret_cast<app::SerializedBooleanUberState*>(m_native_ptr),
                        static_cast<UberId<UberStateType::SerializedBooleanUberState>::value_t>(value)
                    );
                    return;
                case UberStateType::SerializedByteUberState:
                    set_uber_state_value<UberStateType::SerializedByteUberState>(
                        UberId<UberStateType::SerializedByteUberState>(m_id.group, m_id.member),
                        reinterpret_cast<app::SerializedByteUberState*>(m_native_ptr),
                        static_cast<UberId<UberStateType::SerializedByteUberState>::value_t>(value)
                    );
                    return;
                case UberStateType::SerializedIntUberState:
                    set_uber_state_value<UberStateType::SerializedIntUberState>(
                        UberId<UberStateType::SerializedIntUberState>(m_id.group, m_id.member),
                        reinterpret_cast<app::SerializedIntUberState*>(m_native_ptr),
                        static_cast<UberId<UberStateType::SerializedIntUberState>::value_t>(value)
                    );
                    return;
                case UberStateType::SerializedFloatUberState:
                    set_uber_state_value<UberStateType::SerializedFloatUberState>(
                        UberId<UberStateType::SerializedFloatUberState>(m_id.group, m_id.member),
                        reinterpret_cast<app::SerializedFloatUberState*>(m_native_ptr),
                        static_cast<UberId<UberStateType::SerializedFloatUberState>::value_t>(value)
                    );
                    return;
                case UberStateType::VirtualBooleanUberState:
                    set_uber_state_value<UberStateType::VirtualBooleanUberState>(
                        UberId<UberStateType::VirtualBooleanUberState>(m_id.group, m_id.member),
                        nullptr,
                        static_cast<UberId<UberStateType::VirtualBooleanUberState>::value_t>(value)
                    );
                    return;
                case UberStateType::VirtualByteUberState:
                    set_uber_state_value<UberStateType::VirtualByteUberState>(
                        UberId<UberStateType::VirtualByteUberState>(m_id.group, m_id.member),
                        nullptr,
                        static_cast<UberId<UberStateType::VirtualByteUberState>::value_t>(value)
                    );
                    return;
                case UberStateType::VirtualIntUberState:
                    set_uber_state_value<UberStateType::VirtualIntUberState>(
                        UberId<UberStateType::VirtualIntUberState>(m_id.group, m_id.member),
                        nullptr,
                        static_cast<UberId<UberStateType::VirtualIntUberState>::value_t>(value)
                    );
                    return;
                case UberStateType::VirtualFloatUberState:
                    set_uber_state_value<UberStateType::VirtualFloatUberState>(
                        UberId<UberStateType::VirtualFloatUberState>(m_id.group, m_id.member),
                        nullptr,
                        static_cast<UberId<UberStateType::VirtualFloatUberState>::value_t>(value)
                    );
                    return;
                case UberStateType::SavePedestalUberState:
                    set_uber_state_value<UberStateType::SavePedestalUberState>(
                        UberId<UberStateType::SavePedestalUberState>(m_id.group, m_id.member),
                        reinterpret_cast<app::SavePedestalUberState*>(m_native_ptr),
                        static_cast<UberId<UberStateType::SavePedestalUberState>::value_t>(value)
                    );
                    return;
                default:
            }

            throw std::runtime_error("Tried to set value of untyped uber state of unknown or read-only type");
        }

        std::optional<UberStateType> get_type();

        std::string get_name();

        std::string get_group_name();

        bool is_valid();

        bool is_read_only();

        bool is_virtual();

        const id_t& get_uber_id() const;

        void apply() const;

        const id_t& operator()() const;

        void initialize_native_ptr();

        void initialize_native_ptr(app::IUberState* native_ptr);

        native_t* get_native_ptr() const;

        constexpr operator UntypedUberId() const { // NOLINT(*-explicit-constructor)
            return UntypedUberId(get_uber_id());
        }

        UntypedUberState(const UntypedUberState& other) :
            m_id(other.m_id),
            m_native_ptr(other.m_native_ptr),
            m_type_cache(other.m_type_cache) {
            if (m_native_ptr == nullptr) {
                initialize_native_ptr_when_uber_states_initialized();
            }
        }
        UntypedUberState(UntypedUberState&& other) noexcept :
            m_id(other.m_id),
            m_native_ptr(other.m_native_ptr),
            m_type_cache(other.m_type_cache),
            m_initialize_droppable(std::move(other.m_initialize_droppable)) {}
        UntypedUberState& operator=(const UntypedUberState& other) {
            if (this == &other) {
                return *this;
            }
            m_id = other.m_id;
            m_native_ptr = other.m_native_ptr;
            m_type_cache = other.m_type_cache;
            if (m_native_ptr == nullptr) {
                initialize_native_ptr_when_uber_states_initialized();
            }
            return *this;
        }
        UntypedUberState& operator=(UntypedUberState&& other) noexcept {
            if (this == &other) {
                return *this;
            }
            m_id = other.m_id;
            m_native_ptr = other.m_native_ptr;
            m_type_cache = other.m_type_cache;
            m_initialize_droppable = std::move(other.m_initialize_droppable);
            return *this;
        }

        template<const UberStateType OTHER_TYPE>
        bool operator==(const UberState<OTHER_TYPE>& other) const {
            return m_id == other.get_uber_id();
        }

        template<const UberId OTHER_ID>
        bool operator==(const StaticUberState<OTHER_ID>& other) const {
            return m_id == other.get_uber_id();
        }

        bool operator==(const UntypedUberState& other) const {
            return m_id == other.get_uber_id();
        }

    private:
        void initialize_native_ptr_when_uber_states_initialized() {
            if (modloader::are_uber_states_initialized()) {
                initialize_native_ptr();
            } else {
                m_initialize_droppable = modloader::event_bus().on<modloader::events::InitializeUberStates>([this](auto) {
                    initialize_native_ptr();
                    m_initialize_droppable = nullptr;
                });
            }
        }

        id_t m_id;
        native_t* m_native_ptr = nullptr;
        std::optional<UberStateType> m_type_cache = std::nullopt;
        common::Droppable::ptr_t m_initialize_droppable = nullptr;
    };

    template<typename T, typename UBER_STATE_TYPE>
    concept ReadableUberState = requires(UBER_STATE_TYPE u)
    {
        { u.get() } -> std::same_as<T>;
    };
}

template <core::api::uber_states::UberStateType ID_TYPE>
struct std::hash<core::api::uber_states::UberState<ID_TYPE>> {
    std::size_t operator()(const core::api::uber_states::UberState<ID_TYPE>& s) const noexcept {
        return hash<core::api::uber_states::UberId<ID_TYPE>>()(s.get_uber_id());
    }
};
