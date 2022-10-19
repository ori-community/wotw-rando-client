#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinPickupProcessor_c {
        inline app::SeinPickupProcessor_c__Class** type_info = (app::SeinPickupProcessor_c__Class**)(modloader::win::memory::resolve_rva(0x04780A10));
        inline app::SeinPickupProcessor_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinPickupProcessor_c__Class>(type_info, "", "SeinPickupProcessor", "<>c");
        }
        inline app::SeinPickupProcessor_c* create() {
            return il2cpp::create_object<app::SeinPickupProcessor_c>(get_class());
        }
    } // namespace SeinPickupProcessor_c
} // namespace app::classes::types
