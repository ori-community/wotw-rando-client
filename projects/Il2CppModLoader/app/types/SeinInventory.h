#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinInventory {
        namespace {
            app::SeinInventory__Class* type_info_ref = nullptr;
        }
        app::SeinInventory__Class** type_info = &type_info_ref;
        inline app::SeinInventory__Class* get_class() {
            return il2cpp::get_class<app::SeinInventory__Class>(type_info, "", "SeinInventory");
        }
        inline app::SeinInventory* create() {
            return il2cpp::create_object<app::SeinInventory>(get_class());
        }
    } // namespace SeinInventory
} // namespace app::classes::types
