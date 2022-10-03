#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TypeNames {
        namespace {
            app::TypeNames__Class* type_info_ref = nullptr;
        }
        app::TypeNames__Class** type_info = &type_info_ref;
        inline app::TypeNames__Class* get_class() {
            return il2cpp::get_class<app::TypeNames__Class>(type_info, "System", "TypeNames");
        }
        inline app::TypeNames* create() {
            return il2cpp::create_object<app::TypeNames>(get_class());
        }
    } // namespace TypeNames
} // namespace app::classes::types
