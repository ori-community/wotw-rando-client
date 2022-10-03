#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NintendoSaveFileSystem {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NintendoSaveFileSystem__Class** type_info;
        inline app::NintendoSaveFileSystem__Class* get_class() {
            return il2cpp::get_class<app::NintendoSaveFileSystem__Class>(type_info, "", "NintendoSaveFileSystem");
        }
        inline app::NintendoSaveFileSystem* create() {
            return il2cpp::create_object<app::NintendoSaveFileSystem>(get_class());
        }
    } // namespace NintendoSaveFileSystem
} // namespace app::classes::types
