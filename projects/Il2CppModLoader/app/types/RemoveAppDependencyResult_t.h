#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RemoveAppDependencyResult_t {
        namespace {
            app::RemoveAppDependencyResult_t__Class* type_info_ref = nullptr;
        }
        app::RemoveAppDependencyResult_t__Class** type_info = &type_info_ref;
        inline app::RemoveAppDependencyResult_t__Class* get_class() {
            return il2cpp::get_class<app::RemoveAppDependencyResult_t__Class>(type_info, "Steamworks", "RemoveAppDependencyResult_t");
        }
        inline app::RemoveAppDependencyResult_t* create() {
            return il2cpp::create_object<app::RemoveAppDependencyResult_t>(get_class());
        }
        inline app::RemoveAppDependencyResult_t__Boxed* box(app::RemoveAppDependencyResult_t value) {
            return il2cpp::box_value<app::RemoveAppDependencyResult_t__Boxed>(get_class(), value);
        }
    } // namespace RemoveAppDependencyResult_t
} // namespace app::classes::types
