#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinFall {
        namespace {
            app::SeinFall__Class* type_info_ref = nullptr;
        }
        app::SeinFall__Class** type_info = &type_info_ref;
        inline app::SeinFall__Class* get_class() {
            return il2cpp::get_class<app::SeinFall__Class>(type_info, "", "SeinFall");
        }
        inline app::SeinFall* create() {
            return il2cpp::create_object<app::SeinFall>(get_class());
        }
    } // namespace SeinFall
} // namespace app::classes::types
