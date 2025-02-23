#pragma once

#include <memory>
#include <nlohmann/adl_serializer.hpp>
#include <string>
#include <vector>
#include <Core/messages/message_handle.h>
#include <Randomizer/game/map/icon.h>

namespace randomizer::seed {
    class Seed;
    struct SeedMemory;
    struct SeedExecutionEnvironment;

    struct IInstruction {
        virtual ~IInstruction() = default;
        virtual void execute(Seed& seed, SeedMemory& memory, SeedExecutionEnvironment& environment) const = 0;
        virtual std::string to_string(const Seed& seed, const SeedMemory& memory) const = 0;
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

    struct SeedExecutionEnvironment {
        std::unordered_map<std::size_t, std::shared_ptr<game::map::Icon>> warp_icons;
        std::unordered_map<std::size_t, QueuedMessageBox> queued_message_boxes;
        std::unordered_map<std::size_t, FreeMessageBox> free_message_boxes;
        std::unordered_set<std::size_t> message_boxes_with_timeouts;
        std::vector<SeedTimer> timers;
        bool prevent_grant = false;
    };

    std::unique_ptr<IInstruction> create_instruction(const nlohmann::json& j);
    void destroy_volatile_seed_data();

    void destroy_free_message_boxes();
}
