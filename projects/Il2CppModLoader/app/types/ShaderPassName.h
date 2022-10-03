#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderPassName {
        namespace {
            app::ShaderPassName__Class* type_info_ref = nullptr;
        }
        app::ShaderPassName__Class** type_info = &type_info_ref;
        inline app::ShaderPassName__Class* get_class() {
            return il2cpp::get_class<app::ShaderPassName__Class>(type_info, "UnityEngine.Experimental.Rendering", "ShaderPassName");
        }
        inline app::ShaderPassName* create() {
            return il2cpp::create_object<app::ShaderPassName>(get_class());
        }
        inline app::ShaderPassName__Boxed* box(app::ShaderPassName value) {
            return il2cpp::box_value<app::ShaderPassName__Boxed>(get_class(), value);
        }
    } // namespace ShaderPassName
} // namespace app::classes::types
