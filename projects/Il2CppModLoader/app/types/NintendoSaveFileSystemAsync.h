#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace NintendoSaveFileSystemAsync {
        inline app::NintendoSaveFileSystemAsync__Class** type_info = (app::NintendoSaveFileSystemAsync__Class**)(modloader::win::memory::resolve_rva(0x0478B9B0));
        inline app::NintendoSaveFileSystemAsync__Class* get_class() {
            return il2cpp::get_class<app::NintendoSaveFileSystemAsync__Class>(type_info, "", "NintendoSaveFileSystemAsync");
        }
        inline app::NintendoSaveFileSystemAsync* create() {
            return il2cpp::create_object<app::NintendoSaveFileSystemAsync>(get_class());
        }
    } // namespace NintendoSaveFileSystemAsync
} // namespace app::classes::types
