#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EntityControllerBT {
        inline app::EntityControllerBT__Class** type_info = (app::EntityControllerBT__Class**)(modloader::win::memory::resolve_rva(0x04755B80));
        inline app::EntityControllerBT__Class* get_class() {
            return il2cpp::get_class<app::EntityControllerBT__Class>(type_info, "", "EntityControllerBT");
        }
        inline app::EntityControllerBT* create() {
            return il2cpp::create_object<app::EntityControllerBT>(get_class());
        }
    } // namespace EntityControllerBT
} // namespace app::classes::types
