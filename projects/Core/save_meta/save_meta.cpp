#include <Core/save_meta/save_meta.h>
#include <Core/utils/byte_stream.h>
#include <Modloader/app/methods/DeathUberStateManager.h>
#include <Modloader/app/methods/Moon/UberStateValueStore.h>
#include <Modloader/app/methods/SaveGameController.h>
#include <Modloader/app/methods/SaveSlotsManager.h>
#include <Modloader/app/methods/System/IO/File.h>
#include <Core/api/game/game.h>
#include <Modloader/app/types/Byte.h>
#include <Modloader/common.h>
#include <Modloader/interception_macros.h>
#include <Modloader/windows_api/console.h>
#include <Core/utils/mood_guid.h>
#include <fmt/format.h>
#include <unordered_map>

using namespace app::classes;
using namespace modloader;
using namespace modloader::win::console;

namespace core::save_meta {
    /**
     * Magic number a save file with attached SaveMeta data starts with.
     * Normal Ori save files start with a 12 integer (as of patch 3).
     */
    constexpr int SAVE_META_FILE_MAGIC = 1;
    constexpr int SAVE_META_FILE_VERSION = 1; // Reserved for future upgrades

    struct SaveMetaSlotConfiguration {
        std::shared_ptr<SaveMetaHandler> handler;
        SaveMetaSlotPersistence persistence;
        std::vector<std::byte> last_saved_data;
        bool last_saved_data_initialized = false;
    };

    std::unordered_map<SaveMetaSlot, SaveMetaSlotConfiguration> slots;

    void register_slot(SaveMetaSlot slot, SaveMetaSlotPersistence persistence, std::shared_ptr<SaveMetaHandler> handler) {
        slots[slot] = {
            handler,
            persistence,
            {}
        };
    }

    void clear_slot(SaveMetaSlot slot) {
        slots.erase(slot);
    }

    std::vector<std::byte> SaveMetaSerializable::save() {
        return this->serialize();
    }

    void SaveMetaSerializable::load(utils::ByteStream& stream) {
        this->deserialize(stream);
    }

    std::vector<std::byte> JsonSaveMetaSerializable::serialize() {
        auto str = this->json_serialize().dump();
        utils::ByteStream stream;
        stream.write<unsigned long>(str.length());
        stream.write_string(str);
        return stream.buffer;
    }

    void JsonSaveMetaSerializable::deserialize(utils::ByteStream& stream) {
        auto length = stream.read<unsigned long>();
        auto str = stream.read_string(length);

        auto j = nlohmann::json::parse(str);
        this->json_deserialize(j);
    }

    namespace {
        bool is_loading_save_file = false;
        bool is_loading_backup = false;
        bool is_dying = false;
        utils::MoodGuid previous_save_guid;
        utils::MoodGuid current_save_guid;

        utils::MoodGuid read_guid_from_save(app::Byte__Array* data) {
            utils::ByteStream stream(data);

            if (stream.peek<int>() == SAVE_META_FILE_MAGIC) {
                stream.skip<int>();
                stream.skip<int>(); // VERSION unused for now

                return stream.read<utils::MoodGuid>();
            }

            // Non-rando save, return random GUID
            return utils::MoodGuid();
        }

        struct SaveMetaReadResult {
            unsigned long vanilla_data_size;
            unsigned long save_meta_data_size;
            app::Byte__Array* vanilla_data;
        };

        /**
         * Reads SaveMeta data from a byte array and returns remaining bytes.
         * @param data
         * @param load If false, skips loading the data and only returns the remaining data
         * @param minimum_persistence Minimum Persistence level to load/not load (depends on exclude_persistences)
         * @param exclude_persistences Whether to exclude persistence levels >= minimum_persistence instead of including
         * @return
         */
        SaveMetaReadResult read_save_meta_from_byte_array(app::Byte__Array* data, bool load, SaveMetaSlotPersistence minimum_persistence = SaveMetaSlotPersistence::None, bool exclude_persistences = false) {
            utils::ByteStream stream(data);

            if (stream.peek<int>() == SAVE_META_FILE_MAGIC) {
                stream.skip<int>();
                stream.skip<int>(); // VERSION unused for now

                auto guid = stream.read<utils::MoodGuid>();
                auto slot_count = stream.read<int>();

                console_send(fmt::format("Reading {} SaveMeta slots from save file {},{},{},{}", slot_count, guid.A, guid.B, guid.C, guid.D));

                for (int i = 0; i < slot_count; ++i) {
                    auto slot = stream.read<SaveMetaSlot>();
                    auto length = stream.read<unsigned long>();

                    console_send(fmt::format("- Slot {}: length = {}", i, length));

                    if (!slots.contains(slot)) {
                        console_send(fmt::format("  Tried to load SaveMeta slot {} but no handler was provided for this slot", static_cast<int>(slot)));
                        stream.skip(length);
                        continue;
                    }

                    auto slot_config = slots[slot];
                    auto slot_persistence_int = static_cast<int>(slot_config.persistence);
                    auto minimum_persistence_int = static_cast<int>(minimum_persistence);
                    auto persistence_excluded = slot_persistence_int < minimum_persistence_int;

                    if (exclude_persistences) {
                        persistence_excluded = !persistence_excluded;
                    }

                    if (!load || persistence_excluded) {
                        stream.skip(length);
                        continue;
                    }

                    auto buffer = stream.read(length);

                    if (!slot_config.last_saved_data_initialized) {
                        slot_config.last_saved_data = buffer;
                        slot_config.last_saved_data_initialized = true;
                    }

                    utils::ByteStream slot_data(buffer);
                    slots[slot].handler->load(slot_data);
                }

                if (load) {
                    previous_save_guid = current_save_guid;
                    current_save_guid = guid;
                }
            } else {
                console_send("Save file did not start with magic byte. Skipping.");
            }

            auto remaining_bytes = stream.peek_to_end();
            return SaveMetaReadResult {
                static_cast<unsigned long>(remaining_bytes.size()),
                stream.position,
                types::Byte::create_array(remaining_bytes)
            };
        }

        utils::ByteStream get_save_meta_data(SaveMetaSlotPersistence minimum_persistence = SaveMetaSlotPersistence::None) {
            utils::ByteStream stream;

            stream.write<int>(SAVE_META_FILE_MAGIC);
            stream.write<int>(SAVE_META_FILE_VERSION);
            stream.write<utils::MoodGuid>(current_save_guid);
            stream.write<int>(slots.size());

            for (auto& item : slots) {
                stream.write<SaveMetaSlot>(item.first);

                // Save previous data if this slot is not set to persist through death
                auto data = (static_cast<int>(item.second.persistence) >= static_cast<int>(minimum_persistence) || !item.second.last_saved_data_initialized)
                        ? item.second.handler->save()
                        : item.second.last_saved_data;

                stream.write<unsigned long>(data.size());
                stream.write(data);

                item.second.last_saved_data = data;
                item.second.last_saved_data_initialized = true;
            }

            return std::move(stream);
        }

        SaveMetaReadResult read_save_meta_from_byte_array_with_current_parameters(app::Byte__Array* data) {
            if (is_loading_backup) {
                return read_save_meta_from_byte_array(data, true, SaveMetaSlotPersistence::ThroughDeathsAndQTMsAndBackups, true);
            }

            if (is_dying) {
                return read_save_meta_from_byte_array(data, true, SaveMetaSlotPersistence::ThroughDeaths, true);
            }

            if (is_loading_save_file) {
                auto new_guid = read_guid_from_save(data);

                if (new_guid != current_save_guid) {
                    return read_save_meta_from_byte_array(data, true);
                }

                return read_save_meta_from_byte_array(data, true, SaveMetaSlotPersistence::ThroughDeathsAndQTMs, true);
            }

            return read_save_meta_from_byte_array(data, false);
        }

        IL2CPP_INTERCEPT(Moon::UberStateValueStore, void, ctor_2, (app::UberStateValueStore * this_ptr, app::Byte__Array* data)) {
            next::Moon::UberStateValueStore::ctor_2(this_ptr, read_save_meta_from_byte_array_with_current_parameters(data).vanilla_data);
        }

        IL2CPP_INTERCEPT(Moon::UberStateValueStore, void, ctor_3, (app::UberStateValueStore * this_ptr, app::Byte__Array* data, int actual_size)) {
            auto result = read_save_meta_from_byte_array_with_current_parameters(data);
            next::Moon::UberStateValueStore::ctor_3(this_ptr, result.vanilla_data, result.vanilla_data_size);
        }

        IL2CPP_INTERCEPT(SaveGameController, void, LoadUberState_1, (app::SaveGameController * this_ptr, app::String* file_name)) {
            ScopedSetter setter1(is_loading_save_file, true);

            auto backup_slot = SaveSlotsManager::get_BackupIndex();
            ScopedSetter setter2(is_loading_backup, backup_slot != -1);

            next::SaveGameController::LoadUberState_1(this_ptr, file_name);
        }

        IL2CPP_INTERCEPT(SaveGameController, void, LoadUberState_2, (app::SaveGameController * this_ptr, app::Byte__Array* data)) {
            ScopedSetter setter1(is_loading_save_file, true);

            auto backup_slot = SaveSlotsManager::get_BackupIndex();
            ScopedSetter setter2(is_loading_backup, backup_slot != -1);

            next::SaveGameController::LoadUberState_2(this_ptr, data);
        }

        IL2CPP_INTERCEPT(SaveGameController, bool, PerformLoad, (app::SaveGameController * this_ptr)) {
            auto save_slot_index = SaveSlotsManager::get_CurrentSlotIndex();
            auto backup_slot = SaveSlotsManager::get_BackupIndex();

            if (backup_slot != -1) { // We're loading a backup...
                ScopedSetter setter(is_loading_backup, true);

                // Load the backup...
                auto return_value = next::SaveGameController::PerformLoad(this_ptr);

                // ...and then load SaveMeta with the ThroughDeathsAndBackup persistence
                // level from the main save file if we're on a new/different save slot
                if (current_save_guid != previous_save_guid) {
                    auto save_info = SaveGameController::GetSaveFileInfo(this_ptr, save_slot_index, backup_slot);
                    auto path = save_info->fields.m_FullSaveFilePath;
                    auto path_str = il2cpp::convert_csstring(path);
                    auto bytes = System::IO::File::ReadAllBytes(path);
                    read_save_meta_from_byte_array(bytes, true, SaveMetaSlotPersistence::ThroughDeathsAndQTMsAndBackups);
                }

                return return_value;
            }

            return next::SaveGameController::PerformLoad(this_ptr);
        }

        IL2CPP_INTERCEPT(Moon::UberStateValueStore, app::Byte__Array*, ToByteArray, (app::UberStateValueStore * this_ptr)) {
            console_send("Serializing uber state value store");

            utils::ByteStream game_save_data(next::Moon::UberStateValueStore::ToByteArray(this_ptr));

            // Get SaveMeta data
            auto stream = get_save_meta_data(is_dying ? SaveMetaSlotPersistence::ThroughDeaths : SaveMetaSlotPersistence::None);

            // Append vanilla game save data and return
            stream.write(game_save_data.peek_to_end());
            return types::Byte::create_array(stream.peek_to_end());
        }

        IL2CPP_INTERCEPT(DeathUberStateManager, void, OnDeath, ()) {
            ScopedSetter setter(is_dying, true);
            next::DeathUberStateManager::OnDeath();
        }

        void on_new_game(GameEvent event, EventTiming timing) {
            current_save_guid = utils::MoodGuid();
        }

        void initialize() {
            game::event_bus().register_handler(GameEvent::NewGame, EventTiming::After, &on_new_game);
        }

        CALL_ON_INIT(initialize);
    } // namespace
} // namespace core::save_meta