#pragma once
#include <Modloader/app/structs/NintendoSaveFileSystemBinaryWriter.h>
#include <Modloader/app/structs/NintendoSaveFileSystemBinaryWriter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NintendoSaveFileSystemBinaryWriter {
        inline app::NintendoSaveFileSystemBinaryWriter__Class** type_info() {
            static app::NintendoSaveFileSystemBinaryWriter__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NintendoSaveFileSystemBinaryWriter__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NintendoSaveFileSystemBinaryWriter__Class* get_class() {
            return il2cpp::get_class<app::NintendoSaveFileSystemBinaryWriter__Class>(type_info(), "", "NintendoSaveFileSystemBinaryWriter");
        }
        inline app::NintendoSaveFileSystemBinaryWriter* create() {
            return il2cpp::create_object<app::NintendoSaveFileSystemBinaryWriter>(get_class());
        }
    } // namespace NintendoSaveFileSystemBinaryWriter
} // namespace app::classes::types
