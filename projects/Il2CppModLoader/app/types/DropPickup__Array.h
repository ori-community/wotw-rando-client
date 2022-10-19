#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DropPickup__Array {
        namespace {
            inline app::DropPickup__Array__Class* type_info_ref = nullptr;
        }
        inline app::DropPickup__Array__Class** type_info = &type_info_ref;
        inline app::DropPickup__Array__Class* get_class() {
            return il2cpp::get_class<app::DropPickup__Array__Class>(type_info, "", "DropPickup[]");
        }
        inline app::DropPickup__Array* create() {
            return il2cpp::create_object<app::DropPickup__Array>(get_class());
        }
    } // namespace DropPickup__Array
} // namespace app::classes::types
