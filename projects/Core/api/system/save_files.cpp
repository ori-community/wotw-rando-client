#include <Core/api/game/game.h>
#include <Core/api/system/save_files.h>
#include <Core/utils/byte_stream.h>
#include <Modloader/app/methods/Grdk/Wrapper.h>
#include <Modloader/app/methods/SaveGameController.h>
#include <Modloader/app/methods/System/IO/File.h>

using namespace app::classes;

namespace core::api::save_files {
    app::Byte__Array* get_byte_array(int slot_index, int backup_index) {
        if (Grdk::Wrapper::get_InitializedOk()) { // Handle GRDK (Xbox Account) saves
            return Grdk::Wrapper::Load_1(slot_index, backup_index);
        }

        auto save_info = SaveGameController::GetSaveFileInfo(game::save_controller(), slot_index, backup_index);
        auto path = save_info->fields.m_FullBackupSaveFilePath;
        auto path_str = il2cpp::convert_csstring(path);
        return System::IO::File::ReadAllBytes(path);
    }

    std::vector<std::byte> get_bytes(int slot_index, int backup_index) {
        return utils::ByteStream(get_byte_array(slot_index, backup_index)).peek_to_end();
    }
}

