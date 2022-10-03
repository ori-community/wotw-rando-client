#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DisableGameObjectWithHealthWhenOutOfFrustum {
        namespace {
            app::DisableGameObjectWithHealthWhenOutOfFrustum__Class* type_info_ref = nullptr;
        }
        app::DisableGameObjectWithHealthWhenOutOfFrustum__Class** type_info = &type_info_ref;
        inline app::DisableGameObjectWithHealthWhenOutOfFrustum__Class* get_class() {
            return il2cpp::get_class<app::DisableGameObjectWithHealthWhenOutOfFrustum__Class>(type_info, "", "DisableGameObjectWithHealthWhenOutOfFrustum");
        }
        inline app::DisableGameObjectWithHealthWhenOutOfFrustum* create() {
            return il2cpp::create_object<app::DisableGameObjectWithHealthWhenOutOfFrustum>(get_class());
        }
    } // namespace DisableGameObjectWithHealthWhenOutOfFrustum
} // namespace app::classes::types
