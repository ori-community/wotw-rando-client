#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace NintendoSaveFileSystem {
        inline app::NintendoSaveFileSystem__Class** type_info = (app::NintendoSaveFileSystem__Class**)(modloader::win::memory::resolve_rva(0x04780D88));
        inline app::NintendoSaveFileSystem__Class* get_class() {
            return il2cpp::get_class<app::NintendoSaveFileSystem__Class>(type_info, "", "NintendoSaveFileSystem");
        }
        inline app::NintendoSaveFileSystem* create() {
            return il2cpp::create_object<app::NintendoSaveFileSystem>(get_class());
        }
    } // namespace NintendoSaveFileSystem
} // namespace app::classes::types
