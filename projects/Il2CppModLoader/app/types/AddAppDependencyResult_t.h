#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AddAppDependencyResult_t {
        namespace {
            app::AddAppDependencyResult_t__Class* type_info_ref = nullptr;
        }
        app::AddAppDependencyResult_t__Class** type_info = &type_info_ref;
        inline app::AddAppDependencyResult_t__Class* get_class() {
            return il2cpp::get_class<app::AddAppDependencyResult_t__Class>(type_info, "Steamworks", "AddAppDependencyResult_t");
        }
        inline app::AddAppDependencyResult_t* create() {
            return il2cpp::create_object<app::AddAppDependencyResult_t>(get_class());
        }
        inline app::AddAppDependencyResult_t__Boxed* box(app::AddAppDependencyResult_t value) {
            return il2cpp::box_value<app::AddAppDependencyResult_t__Boxed>(get_class(), value);
        }
    } // namespace AddAppDependencyResult_t
} // namespace app::classes::types
