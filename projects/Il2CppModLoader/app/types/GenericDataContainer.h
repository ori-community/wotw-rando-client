#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GenericDataContainer {
        inline app::GenericDataContainer__Class** type_info = (app::GenericDataContainer__Class**)(modloader::win::memory::resolve_rva(0x047317D0));
        inline app::GenericDataContainer__Class* get_class() {
            return il2cpp::get_class<app::GenericDataContainer__Class>(type_info, "", "GenericDataContainer");
        }
        inline app::GenericDataContainer* create() {
            return il2cpp::create_object<app::GenericDataContainer>(get_class());
        }
    } // namespace GenericDataContainer
} // namespace app::classes::types
