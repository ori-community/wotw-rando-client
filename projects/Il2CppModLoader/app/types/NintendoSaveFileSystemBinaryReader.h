#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NintendoSaveFileSystemBinaryReader {
        namespace {
            app::NintendoSaveFileSystemBinaryReader__Class* type_info_ref = nullptr;
        }
        app::NintendoSaveFileSystemBinaryReader__Class** type_info = &type_info_ref;
        inline app::NintendoSaveFileSystemBinaryReader__Class* get_class() {
            return il2cpp::get_class<app::NintendoSaveFileSystemBinaryReader__Class>(type_info, "", "NintendoSaveFileSystemBinaryReader");
        }
        inline app::NintendoSaveFileSystemBinaryReader* create() {
            return il2cpp::create_object<app::NintendoSaveFileSystemBinaryReader>(get_class());
        }
    } // namespace NintendoSaveFileSystemBinaryReader
} // namespace app::classes::types
