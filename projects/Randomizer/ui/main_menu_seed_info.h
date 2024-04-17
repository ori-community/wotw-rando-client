#pragma once
#include <Common/event_bus.h>
#include <Randomizer/seed/seed.h>

namespace randomizer::main_menu_seed_info {
  struct SeedMetaDataLoadedEventArgs {
    std::optional<seed::SeedMetaData> seed_meta_data;
    bool is_empty_save_file;
  };

  void update_difficulty_menu_items();
  common::EventBus<SeedMetaDataLoadedEventArgs>& seed_meta_data_loaded_event_bus();
}
