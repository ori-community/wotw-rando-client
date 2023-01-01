#pragma once

#include <vector>
#include <string>
#include <memory>
#include <nlohmann/json.hpp>
#include <Core/utils/byte_stream.h>
#include <Core/utils/event_bus.h>
#include <Core/enums/save_meta_slot.h>
#include <Core/enums/save_meta_slot_persistence.h>

namespace core::save_meta {
    /**
     * While you can register SaveMetaSerializables as handlers directly,
     * it's recommended to wrap more complex load/save logic into custom
     * SaveMetaHandlers.
     */
    class CORE_DLLEXPORT SaveMetaHandler {
    public:
        virtual ~SaveMetaHandler() = default;
        virtual std::vector<std::byte> save() = 0;
        virtual void load(utils::ByteStream& stream) = 0;
    };

    class CORE_DLLEXPORT SaveMetaSerializable : public SaveMetaHandler  {
    public:
        virtual ~SaveMetaSerializable() = default;
        virtual std::vector<std::byte> serialize() = 0;
        virtual void deserialize(utils::ByteStream& stream) = 0;
        std::vector<std::byte> save() override;
        void load(utils::ByteStream& stream) override;
    };

    struct SlotDeserializedEventArgs {
        SaveMetaSlot slot;
        std::shared_ptr<SaveMetaSerializable> save_serializable;
    };

    class CORE_DLLEXPORT JsonSaveMetaSerializable : public SaveMetaSerializable {
    public:
        std::vector<std::byte> serialize() override;
        void deserialize(utils::ByteStream& stream) override;
        virtual nlohmann::json json_serialize() = 0;
        virtual void json_deserialize(nlohmann::json& j) = 0;
    };

    CORE_DLLEXPORT void register_slot(SaveMetaSlot slot, SaveMetaSlotPersistence persistence, std::shared_ptr<SaveMetaHandler> handler);
    CORE_DLLEXPORT void clear_slot(SaveMetaSlot slot);
}