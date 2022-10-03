#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GL {
        namespace {
            app::GL__Class* type_info_ref = nullptr;
        }
        app::GL__Class** type_info = &type_info_ref;
        inline app::GL__Class* get_class() {
            return il2cpp::get_class<app::GL__Class>(type_info, "UnityEngine", "GL");
        }
        inline app::GL* create() {
            return il2cpp::create_object<app::GL>(get_class());
        }
    } // namespace GL
} // namespace app::classes::types
