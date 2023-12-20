#pragma once

#include <memory>
#include <nlohmann/adl_serializer.hpp>
#include <string>
#include <vector>

namespace randomizer::seed {
    class Seed;
    struct SeedMemory;

    struct ICommand {
        virtual ~ICommand() = default;
        virtual void execute(Seed& seed, SeedMemory& memory) const = 0;
    };

    struct SeedMemory {
        template<typename T>
        struct MemoryRegister {
            void check_size(const std::size_t index) {
                if (values.size() <= index) {
                    values.resize(index + 1);
                }
            }

            T get(const std::size_t index) {
                check_size(index);
                return values[index];
            }

            void set(const std::size_t index, const T& value) {
                check_size(index);
                values[index] = value;
            }

            std::vector<T> values;
        };

        MemoryRegister<bool> booleans;
        MemoryRegister<int> integers;
        MemoryRegister<float> floats;
        MemoryRegister<std::string> strings;

        template<typename T>
        T get(std::size_t index);

        template<typename T>
        void set(std::size_t index, const T& value);
    };

    template<>
    inline bool SeedMemory::get(const std::size_t index) {
        return booleans.get(index);
    }

    template<>
    inline int SeedMemory::get(const std::size_t index) {
        return integers.get(index);
    }

    template<>
    inline float SeedMemory::get(const std::size_t index) {
        return floats.get(index);
    }

    template<>
    inline std::string SeedMemory::get(const std::size_t index) {
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

    std::unique_ptr<ICommand> create_command(const nlohmann::json& j);
    void destroy_all_seed_icons();
}
