#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShadowMapPass__Enum {
        namespace {
            app::ShadowMapPass__Enum__Class* type_info_ref = nullptr;
        }
        app::ShadowMapPass__Enum__Class** type_info = &type_info_ref;
        inline app::ShadowMapPass__Enum__Class* get_class() {
            return il2cpp::get_class<app::ShadowMapPass__Enum__Class>(type_info, "UnityEngine.Rendering", "ShadowMapPass");
        }
        inline app::ShadowMapPass__Enum* create() {
            return il2cpp::create_object<app::ShadowMapPass__Enum>(get_class());
        }
    } // namespace ShadowMapPass__Enum
} // namespace app::classes::types
