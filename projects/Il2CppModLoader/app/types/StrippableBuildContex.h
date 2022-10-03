#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StrippableBuildContex {
        namespace {
            app::StrippableBuildContex__Class* type_info_ref = nullptr;
        }
        app::StrippableBuildContex__Class** type_info = &type_info_ref;
        inline app::StrippableBuildContex__Class* get_class() {
            return il2cpp::get_class<app::StrippableBuildContex__Class>(type_info, "", "StrippableBuildContex");
        }
        inline app::StrippableBuildContex* create() {
            return il2cpp::create_object<app::StrippableBuildContex>(get_class());
        }
        inline app::StrippableBuildContex__Boxed* box(app::StrippableBuildContex value) {
            return il2cpp::box_value<app::StrippableBuildContex__Boxed>(get_class(), value);
        }
    } // namespace StrippableBuildContex
} // namespace app::classes::types
