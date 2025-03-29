#include <Randomizer/archipelago/archipelago_seedgen.h>
#include <Randomizer/archipelago/seedgen_source_generators/spawn.inc>
#include <Randomizer/archipelago/seedgen_source_generators/config.inc>
#include <Randomizer/archipelago/seedgen_source_generators/flags.inc>
#include <Randomizer/archipelago/seedgen_source_generators/format_version.inc>
#include <Randomizer/archipelago/seedgen_source_generators/better_spawn.inc>
#include <Randomizer/archipelago/seedgen_source_generators/better_wellspring.inc>
#include <Randomizer/archipelago/seedgen_source_generators/seed_core.inc>
#include <Randomizer/archipelago/seedgen_source_generators/glades_done.inc>
#include <Randomizer/archipelago/seedgen_source_generators/knowledge_hints.inc>
#include <Randomizer/archipelago/seedgen_source_generators/no_arenas.inc>
#include <Randomizer/archipelago/seedgen_source_generators/no_bosses.inc>
#include <Randomizer/archipelago/seedgen_source_generators/no_demi_bosses.inc>
#include <Randomizer/archipelago/seedgen_source_generators/no_hand.inc>
#include <Randomizer/archipelago/seedgen_source_generators/no_hearts.inc>
#include <Randomizer/archipelago/seedgen_source_generators/no_keystone.inc>
#include <Randomizer/archipelago/seedgen_source_generators/no_quests.inc>
#include <Randomizer/archipelago/seedgen_source_generators/no_rain.inc>
#include <Randomizer/archipelago/seedgen_source_generators/no_shrines.inc>
#include <Randomizer/archipelago/seedgen_source_generators/no_trials.inc>
#include <Randomizer/archipelago/seedgen_source_generators/open_mode.inc>
#include <Randomizer/archipelago/seedgen_source_generators/shops.inc>
#include <Randomizer/archipelago/seedgen_source_generators/qol.inc>
#include <Randomizer/archipelago/seedgen_source_generators/shrine_hints.inc>
#include <Randomizer/archipelago/seedgen_source_generators/trial_hints.inc>
#include <Randomizer/randomizer.h>

// TODO: Replace this with invoking seedgen to generate a "plando" in v5

namespace randomizer::archipelago {
    const std::array SOURCE_GENERATORS = {
        seedgen_source_generators::format_version,
        seedgen_source_generators::spawn,
        seedgen_source_generators::flags,
        seedgen_source_generators::seed_core,
        seedgen_source_generators::trial_hints,
        seedgen_source_generators::better_spawn,
        seedgen_source_generators::better_wellspring,
        seedgen_source_generators::glades_done,
        seedgen_source_generators::knowledge_hints,
        seedgen_source_generators::no_arenas,
        seedgen_source_generators::no_bosses,
        seedgen_source_generators::no_demi_bosses,
        seedgen_source_generators::no_hand,
        seedgen_source_generators::no_hearts,
        seedgen_source_generators::no_keystone,
        seedgen_source_generators::no_quests,
        seedgen_source_generators::no_rain,
        seedgen_source_generators::no_shrines,
        seedgen_source_generators::no_trials,
        seedgen_source_generators::shops,
        seedgen_source_generators::open_mode,
        seedgen_source_generators::qol,
        seedgen_source_generators::shrine_hints,
        seedgen_source_generators::config,
    };

    ArchipelagoSeedGenerator::ArchipelagoSeedGenerator(const ArchipelagoSeedGeneratorOptions& options) {
        m_options = options;
        collect_required_location_scouts();
    }

    const std::unordered_set<std::string>& ArchipelagoSeedGenerator::required_location_scouts() { return m_required_location_scouts; }
    const ArchipelagoSeedGeneratorOptions& ArchipelagoSeedGenerator::get_options() {
        return m_options;
    }

    std::string ArchipelagoSeedGenerator::get_seed_file() const {
        std::string output;

        for (const auto& generator : SOURCE_GENERATORS) {
            const auto result = generator.generate_source(m_options);
            if (result.has_value()) {
                output += *result;
                output += "\n";
            }
        }

        return output;
    }

    void ArchipelagoSeedGenerator::collect_required_location_scouts() {
        m_required_location_scouts.clear();

        for (const auto& generator : SOURCE_GENERATORS) {
            m_required_location_scouts.merge(generator.collect_required_location_names(m_options));
        }
    }
} // namespace randomizer::archipelago
