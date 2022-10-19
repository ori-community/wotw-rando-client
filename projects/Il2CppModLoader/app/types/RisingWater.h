#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RisingWater {
        inline app::RisingWater__Class** type_info = (app::RisingWater__Class**)(modloader::win::memory::resolve_rva(0x04754B30));
        inline app::RisingWater__Class* get_class() {
            return il2cpp::get_class<app::RisingWater__Class>(type_info, "", "RisingWater");
        }
        inline app::RisingWater* create() {
            return il2cpp::create_object<app::RisingWater>(get_class());
        }
    } // namespace RisingWater
} // namespace app::classes::types
