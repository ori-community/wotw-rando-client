#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SelfDestruct {
        namespace {
            app::SelfDestruct__Class* type_info_ref = nullptr;
        }
        app::SelfDestruct__Class** type_info = &type_info_ref;
        inline app::SelfDestruct__Class* get_class() {
            return il2cpp::get_class<app::SelfDestruct__Class>(type_info, "", "SelfDestruct");
        }
        inline app::SelfDestruct* create() {
            return il2cpp::create_object<app::SelfDestruct>(get_class());
        }
    } // namespace SelfDestruct
} // namespace app::classes::types
