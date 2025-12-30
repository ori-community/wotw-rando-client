#pragma once

#include <Core/messages/message_handle.h>
#include <Core/utils/json_serializers.h>
#include <Core/save_meta/save_meta.h>
#include <memory>
#include <nlohmann/adl_serializer.hpp>
#include <string>
#include <vector>

#include "Randomizer/map/map_icons.h"

namespace randomizer::seed {
    class Seed;
    struct SeedMemory;
    struct SeedExecutionEnvironment;

    class InstructionError final : public std::runtime_error {
    public:
        explicit InstructionError(const std::string& m_message) :
            runtime_error(m_message) {}
    };

    struct IInstruction {
        virtual ~IInstruction() = default;
        virtual void execute(Seed& seed, SeedMemory& memory, SeedExecutionEnvironment& environment) const = 0;
        virtual std::string to_string(const Seed& seed, const SeedMemory& memory) const = 0;
        virtual std::string_view get_name() const = 0;
    };

    struct SeedMemory {
        template<typename T>
        struct MemoryRegister {
            void check_size(const std::size_t index) const {
                if (values.size() <= index) {
                    values.resize(index + 1);
                }
            }

            T get(const std::size_t index) const {
                check_size(index);
                return values[index];
            }

            void set(const std::size_t index, const T& value) {
                check_size(index);
                values[index] = value;
            }

            mutable std::vector<T> values;
        };

        MemoryRegister<bool> booleans;
        MemoryRegister<int> integers;
        MemoryRegister<float> floats;
        MemoryRegister<std::string> strings;

        template<typename T>
        T get(std::size_t index) const;

        template<typename T>
        void set(std::size_t index, const T& value);
    };

    template<>
    inline bool SeedMemory::get(const std::size_t index) const {
        return booleans.get(index);
    }

    template<>
    inline int SeedMemory::get(const std::size_t index) const {
        return integers.get(index);
    }

    template<>
    inline float SeedMemory::get(const std::size_t index) const {
        return floats.get(index);
    }

    template<>
    inline std::string SeedMemory::get(const std::size_t index) const {
        return strings.get(index);
    }

    template<>
    inline void SeedMemory::set(const std::size_t index, const bool& value) {
        booleans.set(index, value);
    }

    template<>
    inline void SeedMemory::set(const std::size_t index, const int& value) {
        integers.set(index, value);
    }

    template<>
    inline void SeedMemory::set(const std::size_t index, const float& value) {
        floats.set(index, value);
    }

    template<>
    inline void SeedMemory::set(const std::size_t index, const std::string& value) {
        strings.set(index, value);
    }

    class PersistentSeedMemory final : public core::save_meta::SaveMetaSerializable {
    public:
        SeedMemory memory;
        common::Droppable::ptr_t on_new_game_registration_handle;

        PersistentSeedMemory();
        PersistentSeedMemory(const PersistentSeedMemory& other) = delete;
        PersistentSeedMemory(PersistentSeedMemory&& other) = delete;

        std::vector<std::byte> serialize() override;
        void deserialize(core::utils::ByteStream& stream) override;

        template<typename T>
        T get(const std::size_t index) const {
            using namespace core::reactivity;
            notify_used(MemoryDependency(MemoryDependency::resolve_type<T>(), index));
            return memory.get<T>(index);
        }

        template<typename T>
        void set(const std::size_t index, const T& value) {
            using namespace core::reactivity;
            notify_changed(MemoryDependency(MemoryDependency::resolve_type<T>(), index));
            memory.set(index, value);
        }
    };

    struct SeedTimer {
        core::api::uber_states::UberState toggle;
        core::api::uber_states::UberState value;
    };
    void to_json(nlohmann::json& j, const SeedTimer& timer);
    void from_json(const nlohmann::json& j, SeedTimer& timer);

    struct SeedBoxTrigger {
        struct RuntimeState {
            bool player_was_inside_box_at_last_check = false;
        };

        float x_min;
        float y_min;
        float x_max;
        float y_max;

        std::optional<std::size_t> on_enter_command_id = std::nullopt;
        std::optional<std::size_t> on_leave_command_id = std::nullopt;

        RuntimeState runtime_state;

        NLOHMANN_DEFINE_TYPE_INTRUSIVE(
            SeedBoxTrigger,
            x_min,
            y_min,
            x_max,
            y_max,
            on_enter_command_id,
            on_leave_command_id
        );

        bool is_inside(const app::Vector2& point) const {
            return x_min <= point.x && point.x <= x_max && y_min <= point.y && point.y <= y_max;
        }
    };

    struct QueuedMessageBox {
        core::messages::QueuedMessageHandle::QueuedMessageState last_state = core::messages::QueuedMessageHandle::QueuedMessageState::Queued;
        message_handle_ptr_t handle;
        std::optional<int> visible_callback;
        std::optional<int> hidden_callback;
    };

    struct FreeMessageBox {
        std::shared_ptr<core::api::messages::MessageBox> message_box;
        std::optional<float> timeout = std::nullopt;
    };

    struct SerializedFreeMessageBox {
        core::api::messages::CoordinateSystem coordinate_system;
        app::Vector3 position;
        std::string text;
        app::AlignmentMode__Enum text_alignment;
        float box_width;
        app::HorizontalAnchorMode__Enum horizontal_anchor;
        app::VerticalAnchorMode__Enum vertical_anchor;
        bool show_background;
        std::optional<float> timeout;
        bool visible;

        NLOHMANN_DEFINE_TYPE_INTRUSIVE(
            SerializedFreeMessageBox,
            coordinate_system,
            position,
            text,
            text_alignment,
            box_width,
            horizontal_anchor,
            vertical_anchor,
            show_background,
            timeout,
            visible
        );
    };

    struct SerializedWarpIcon {
        std::string label;
        app::Vector2 position;

        NLOHMANN_DEFINE_TYPE_INTRUSIVE(
            SerializedWarpIcon,
            label,
            position
        );
    };

    struct SeedExecutionEnvironment final : public core::save_meta::JsonSaveMetaSerializable {
        struct ItemSpoilerData {
            map::icons::MapIcon::Type icon_type;
            std::string label;
        };

        bool should_prevent_grant() const { return m_prevent_grant; }
        const auto& get_queued_message_boxes() const { return m_queued_message_boxes; }
        const auto& get_free_message_boxes() const { return m_free_message_boxes; }
        const auto& get_timers() const { return m_timers; }
        const auto& get_spoiler_map_icons() const { return m_spoiler_map_icons; }

        SeedExecutionEnvironment(Seed& seed);
        SeedExecutionEnvironment(const SeedExecutionEnvironment& other) = delete;
        SeedExecutionEnvironment(SeedExecutionEnvironment&& other) = delete;

        nlohmann::json json_serialize() override;
        void json_deserialize(nlohmann::json& j) override;

        /**
         * Reset this seed execution environment to default values
         */
        void reset();

        /**
         * Dispatch visibility events for queued message boxes
         */
        void process_queued_message_box_visibility_callbacks();

        /**
         * Advance free message boxes by the given delta time
         */
        void process_free_message_boxes(float delta);

        /**
         * Advance timers by the given delta time
         */
        void process_timers(float delta) const;

        /**
         * Processes box triggers. Should be called after changing Ori's
         * position (e.g. teleporting), at least once per frame.
         */
        void process_box_triggers();

        /**
         * Clear free message boxes. This should only be used for testing/debug purposes and
         * not in the normal game lifecycle.
         */
        void clear_free_message_boxes();

        /**
         * Add or override a warp icon ("custom TP")
         */
        void set_warp_icon(std::size_t id, const map::icons::MapIcon::ptr_t& icon);

        /**
         * Calls a lambda with a reference to a warp icon to be able to make modifications to it (e.g. change label).
         * Does nothing if a warp icon with the given ID does not exist.
         */
        void modify_warp_icon(std::size_t id, const std::function<void(map::icons::MapIcon::ptr_t&)>& fn);

        /**
         * Erase a warp icon. Does nothing when the given ID does not exist.
         */
        void erase_warp_icon(std::size_t id);

        /**
         * Add a timer
         */
        void add_timer(const SeedTimer& timer);

        /**
         * Execute a lambda immediate and prevent grants during its execution
         */
        void execute_without_grants(const std::function<void()>& fn);

        /**
         * Add a free message box. If a queued message box with the same ID exists, it will be destroyed.
         */
        void add_free_message_box(std::size_t id, const std::shared_ptr<core::api::messages::MessageBox>& message_box);

        /**
         * Add a queued message box. If a free message box with the same ID exists, it will be destroyed.
         */
        void add_queued_message_box(std::size_t id, const message_handle_ptr_t& handle);

        /**
         * Calls a lambda with a reference to a free message box to be able to make modifications to it (e.g. change text).
         * Does nothing if a free message box with the given ID does not exist.
         */
        void modify_free_message_box(std::size_t id, const std::function<void(core::api::messages::MessageBox&)>& fn);

        /**
         * Calls a lambda with a reference to a queued message box to be able to make modifications to it (e.g. change text).
         * Does nothing if a queued message box with the given ID does not exist.
         */
        void modify_queued_message_box(std::size_t id, const std::function<void(core::api::messages::MessageBox&)>& fn);

        /**
         * Sets the hidden callback of a queued message box to a command specified by its command ID.
         * Does nothing if no queued message box with the given ID exists.
         */
        void set_queued_message_box_hidden_callback(std::size_t id, std::size_t callback_command_id);

        /**
         * Sets the hidden callback of a queued message box to a command specified by its command ID.
         * Does nothing if no queued message box with the given ID exists.
         */
        void set_queued_message_box_visible_callback(std::size_t id, std::size_t callback_command_id);

        /**
         * Erase a free message box.
         * Does nothing if a free message box with the given ID does not exist.
         */
        void remove_free_message_box(std::size_t id);

        /**
         * Set the timeout of a queued message box to a specified value.
         * Does nothing if no queued message box with the given ID exists.
         */
        void set_queued_message_box_timeout(std::size_t id, float timeout) const;

        /**
         * Ses the timeout of a free message box to a specified value.
         * Does nothing if no free message box with the given ID exists.
         */
        void set_free_message_box_timeout(std::size_t id, float timeout);

        /**
         * Set a spoiler map icon
         */
        void set_spoiler_map_icon(std::size_t location_id, const map::icons::MapIcon::ptr_t& map_icon);

        /**
         * Adds or sets a box trigger
         */
        void set_box_trigger(std::size_t id, const SeedBoxTrigger& box_trigger);

        /**
         * Calls a lambda with a reference to a box trigger to be able to make modifications to it (e.g. changing the box).
         * Does nothing if a bix trigger with the given ID does not exist.
         */
        void modify_box_trigger(std::size_t id, const std::function<void(SeedBoxTrigger&)>& fn);

        /**
         * Destroys a box trigger.
         */
        void destroy_box_trigger(std::size_t id);

    private:
        // Serialized properties.
        // These are only serialized on-demand in json_serialize():
        std::unordered_map<std::size_t, SerializedFreeMessageBox> m_serialized_free_message_boxes;
        std::unordered_map<std::size_t, SerializedWarpIcon> m_serialized_warp_icons;
        std::vector<SeedTimer> m_timers;
        std::unordered_map<std::size_t, SeedBoxTrigger> m_box_triggers;

        NLOHMANN_DEFINE_TYPE_INTRUSIVE(
            SeedExecutionEnvironment,
            m_serialized_free_message_boxes,
            m_serialized_warp_icons,
            m_timers,
            m_box_triggers
        );

        // Runtime
        std::unordered_map<std::size_t, map::icons::MapIcon::ptr_t> m_warp_icons;
        std::unordered_map<std::size_t, FreeMessageBox> m_free_message_boxes;
        std::unordered_map<std::size_t, QueuedMessageBox> m_queued_message_boxes;
        bool m_prevent_grant = false;
        std::unordered_map<std::size_t, map::icons::MapIcon::ptr_t> m_spoiler_map_icons;
        std::vector<common::Droppable::ptr_t> m_event_bus_handles;
        Seed& m_seed;

        /**
         * Restore serialized data (free message boxes, warp icons etc.) to runtime data.
         * By default, runtime entities is not deserialized immediately because deserialization
         * happens in multiple places in the game where you don't want to immediately create
         * runtime entities. E.g. when dying or in the main menu you don't want free message boxes
         * to appear. Instead, the runtime entities are only create on Respawn and FinishedLoadingSave
         * events.
         */
        void restore_serialized_data_to_runtime();
    };

    std::unique_ptr<IInstruction> create_instruction(const nlohmann::json& j);
}
