#pragma once

#include <vector>
#include <string>
#include <nlohmann/json.hpp>
#include <Core/utils/byte_stream.h>

namespace core::save_meta {
    /**
     * Any class extending `SaveSerializable` can be stored into
     * game save files under a certain SaveMetaSlot.
     * Each slot can only be used once.
     */
    enum class SaveMetaSlot {
        GameStats,
    };

    // TODO:
    // - collect serializables via event bus or whatever
    // - intercept UberStateValueStore__ctor_1, UberStateValueStore_ToByteArray

    class SaveSerializable {
    public:
        virtual ~SaveSerializable() = default;
        virtual std::vector<std::byte> serialize() = 0;
        virtual void deserialize(utils::ByteStream& stream) = 0;
    };

    class JsonSaveSerializable : SaveSerializable {
    public:
    private:
        std::vector<std::byte> serialize() override;
        void deserialize(utils::ByteStream& stream) override;

    public:
        virtual nlohmann::json json_serialize() = 0;
        virtual void json_deserialize(nlohmann::json& j) = 0;
    };
}