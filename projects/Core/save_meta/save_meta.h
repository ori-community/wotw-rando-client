#pragma once

#include <Core/mood_guid.h>
#include <Core/enums/save_meta_slot.h>
#include <Core/enums/save_meta_slot_persistence.h>
#include <Core/utils/byte_stream.h>
#include <Common/event_bus.h>
#include <memory>
#include <nlohmann/json.hpp>
#include <vector>
#include <unordered_map>
#include <unordered_set>

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

    class CORE_DLLEXPORT SaveMetaSerializable : public SaveMetaHandler {
    public:
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

    CORE_DLLEXPORT common::EventBus<app::Byte__Array*>& before_uber_value_store_loaded_event_bus();
    CORE_DLLEXPORT std::unordered_set<SaveMetaSlot> read_save_meta_slots_from_byte_array(app::Byte__Array* data, const std::unordered_map<SaveMetaSlot, std::shared_ptr<SaveMetaHandler>>&slots_to_read);
    CORE_DLLEXPORT void register_slot(SaveMetaSlot slot, SaveMetaSlotPersistence persistence, std::shared_ptr<SaveMetaHandler> handler);
    CORE_DLLEXPORT void clear_slot(SaveMetaSlot slot);
    CORE_DLLEXPORT const MoodGuid& get_current_save_guid();
} // namespace core::save_meta
