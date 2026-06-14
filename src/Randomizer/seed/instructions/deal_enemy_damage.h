#pragma once
#include <Randomizer/seed/instruction_utils.h>
#include <Randomizer/seed/seed.h>
#include <Randomizer/features/damage.h>


INSTRUCTION(DealEnemyDamage)
    explicit DealEnemyDamage(const bool force) :
            force(force) {}

    bool force;

    void execute(Seed& seed, memory::SeedMemory& memory, SeedExecutionEnvironment& environment) const override {
        damage::damage_all_enemies(memory.heap.get<float>(0), force);
    }

    [[nodiscard]] std::string to_string(const Seed& seed, const memory::SeedMemory& memory) const override {
        return std::format("DealEnemyDamage -> {} (force = {})", memory.heap.get<float>(0), force);
    }

    static std::unique_ptr<IInstruction> from_json(const nlohmann::json& j) {
        return std::make_unique<DealEnemyDamage>(j.get<bool>());
    }
};
