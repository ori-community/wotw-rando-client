#pragma once

#include <Core/messages/message_handle.h>
#include <Core/utils/json_serializers.h>
#include <Core/save_meta/save_meta.h>
#include <Randomizer/game/map/icon.h>
#include <memory>
#include <nlohmann/adl_serializer.hpp>
#include <string>
#include <vector>

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

            bool get(const std::size_t index) const
                requires(std::same_as<T, char>) {
                check_size(index);
                return static_cast<bool>(values[index]);
            }

            void set(const std::size_t index, const T& value) {
                check_size(index);
                values[index] = value;
            }

            void set(const std::size_t index, const bool& value)
                requires(std::same_as<T, char>) {
                check_size(index);
                values[index] = static_cast<bool>(value);
            }

            mutable std::vector<T> values;
        };

        MemoryRegister<char> booleans;
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
        common::registration_handle_t on_new_game_registration_handle;

        PersistentSeedMemory();
        PersistentSeedMemory(const PersistentSeedMemory& other) = delete;
        PersistentSeedMemory(PersistentSeedMemory&& other) = delete;

        std::vector<std::byte> serialize() override;
        void deserialize(utils::ByteStream& stream) override;

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

    struct QueuedMessageBox {
        core::messages::QueuedMessageHandle::QueuedMessageState last_state = core::messages::QueuedMessageHandle::QueuedMessageState::Queued;
        message_handle_ptr_t handle;
        std::optional<int> visible_callback;
        std::optional<int> hidden_callback;
    };

    struct FreeMessageBox {
        std::shared_ptr<core::api::messages::MessageBox> message;
        std::optional<float> timeout;
    };

    struct SeedExecutionEnvironment final : public core::save_meta::JsonSaveMetaSerializable {
        struct ItemSpoilerData {
            MapIcon icon;
            std::string label;
        };

        bool should_prevent_grant() const { return m_prevent_grant; }
        const auto& get_queued_message_boxes() const { return m_queued_message_boxes; }
        const auto& get_free_message_boxes() const { return m_free_message_boxes; }
        const auto& get_timers() const { return m_timers; }
        const auto& get_map_spoiler_data() const { return m_map_spoiler_data; }

        SeedExecutionEnvironment() = default;
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
         * Clear free message boxes. This should only be used for testing/debug purposes and
         * not in the normal game lifecycle.
         */
        void clear_free_message_boxes();

        /**
         * Add or override a warp icon ("custom TP")
         */
        void set_warp_icon(std::size_t id, const std::shared_ptr<game::map::Icon>& icon);

        /**
         * Calls a lambda with a reference to a warp icon to be able to make modifications to it (e.g. change label).
         * Does nothing if a warp icon with the given ID does not exist.
         */
        void modify_warp_icon(std::size_t id, const std::function<void(game::map::Icon&)>& fn);

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
         * Set the spoiler data of a location
         */
        void set_map_spoiler_data(const std::string& location_id, const ItemSpoilerData& spoiler_data);

    private:
        // Serialized
        std::unordered_map<std::size_t, std::shared_ptr<game::map::Icon>> m_warp_icons;
        std::unordered_map<std::size_t, FreeMessageBox> m_free_message_boxes;

        // Non-Serialized
        std::unordered_map<std::size_t, QueuedMessageBox> m_queued_message_boxes;
        std::vector<SeedTimer> m_timers;
        bool m_prevent_grant = false;
        std::unordered_map<std::string, ItemSpoilerData> m_map_spoiler_data;
    };

    std::unique_ptr<IInstruction> create_instruction(const nlohmann::json& j);
}
