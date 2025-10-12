#pragma once

#include <Core/save_meta/save_meta.h>

namespace randomizer::archipelago {
    class ArchipelagoSaveData final : public core::save_meta::JsonSaveMetaSerializable {
    public:
        int last_item_index {0};
        std::string ap_seed;

        NLOHMANN_DEFINE_TYPE_INTRUSIVE_WITH_DEFAULT(ArchipelagoSaveData, last_item_index, ap_seed);

        nlohmann::json json_serialize() override;
        void json_deserialize(nlohmann::json& j) override;
    };
}; // namespace randomizer::archipelago
