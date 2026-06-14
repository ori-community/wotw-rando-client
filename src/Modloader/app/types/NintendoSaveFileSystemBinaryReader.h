#pragma once
#include <Modloader/app/structs/NintendoSaveFileSystemBinaryReader.h>
#include <Modloader/app/structs/NintendoSaveFileSystemBinaryReader__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NintendoSaveFileSystemBinaryReader {
        inline app::NintendoSaveFileSystemBinaryReader__Class** type_info() {
            static app::NintendoSaveFileSystemBinaryReader__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NintendoSaveFileSystemBinaryReader__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NintendoSaveFileSystemBinaryReader__Class* get_class() {
            return il2cpp::get_class<app::NintendoSaveFileSystemBinaryReader__Class>(type_info(), "", "NintendoSaveFileSystemBinaryReader");
        }
        inline app::NintendoSaveFileSystemBinaryReader* create() {
            return il2cpp::create_object<app::NintendoSaveFileSystemBinaryReader>(get_class());
        }
    } // namespace NintendoSaveFileSystemBinaryReader
} // namespace app::classes::types
