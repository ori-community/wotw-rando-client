#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NintendoSaveFileSystemAsync {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NintendoSaveFileSystemAsync__Class** type_info;
        inline app::NintendoSaveFileSystemAsync__Class* get_class() {
            return il2cpp::get_class<app::NintendoSaveFileSystemAsync__Class>(type_info, "", "NintendoSaveFileSystemAsync");
        }
        inline app::NintendoSaveFileSystemAsync* create() {
            return il2cpp::create_object<app::NintendoSaveFileSystemAsync>(get_class());
        }
    } // namespace NintendoSaveFileSystemAsync
} // namespace app::classes::types
