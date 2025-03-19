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

        // Serialized
        std::unordered_map<std::size_t, std::shared_ptr<game::map::Icon>> warp_icons;
        std::unordered_map<std::size_t, FreeMessageBox> free_message_boxes; // TODO: Actually serialize this.

        // Non-Serialized
        std::unordered_map<std::size_t, QueuedMessageBox> queued_message_boxes;
        std::unordered_set<std::size_t> message_boxes_with_timeouts;
        std::vector<SeedTimer> timers;
        bool prevent_grant = false;
        std::unordered_map<std::string, ItemSpoilerData> map_spoiler_data;
        common::registration_handle_t on_new_game_registration_handle;

        SeedExecutionEnvironment();
        SeedExecutionEnvironment(const SeedExecutionEnvironment& other) = delete;
        SeedExecutionEnvironment(SeedExecutionEnvironment&& other) = delete;

        nlohmann::json json_serialize() override;
        void json_deserialize(nlohmann::json& j) override;
        void reset();
    };

    std::unique_ptr<IInstruction> create_instruction(const nlohmann::json& j);

    void destroy_free_message_boxes();
}
