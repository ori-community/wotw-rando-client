#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DeflateManager_Config__Array {
        inline app::DeflateManager_Config__Array__Class** type_info = (app::DeflateManager_Config__Array__Class**)(modloader::win::memory::resolve_rva(0x04724000));
        inline app::DeflateManager_Config__Array__Class* get_class() {
            return il2cpp::get_class<app::DeflateManager_Config__Array__Class>(type_info, "Ionic.Zlib", "DeflateManager+Config[]");
        }
        inline app::DeflateManager_Config__Array* create() {
            return il2cpp::create_object<app::DeflateManager_Config__Array>(get_class());
        }
    } // namespace DeflateManager_Config__Array
} // namespace app::classes::types
