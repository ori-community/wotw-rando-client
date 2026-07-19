#include <Randomizer/archipelago/archipelago_save_meta.h>

namespace randomizer::archipelago {
    nlohmann::json ArchipelagoSaveData::json_serialize() {
        nlohmann::json j = *this;
        return j;
    }

    void ArchipelagoSaveData::json_deserialize(nlohmann::json& j) { j.get_to(*this); }

    void ArchipelagoSaveData::reset_slot() {
        last_item_index = 0;
        ap_seed = "";
        received_sl = 0;
        received_ore = 0;
        received_ks = 0;
    }
}; // namespace randomizer::archipelago
