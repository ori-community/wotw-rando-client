#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DoublePtr {
        namespace {
            app::DoublePtr__Class* type_info_ref = nullptr;
        }
        app::DoublePtr__Class** type_info = &type_info_ref;
        inline app::DoublePtr__Class* get_class() {
            return il2cpp::get_class<app::DoublePtr__Class>(type_info, "System", "Double*");
        }
        inline app::DoublePtr* create() {
            return il2cpp::create_object<app::DoublePtr>(get_class());
        }
    } // namespace DoublePtr
} // namespace app::classes::types
