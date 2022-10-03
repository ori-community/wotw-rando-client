#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DepthTextureMode__Enum {
        namespace {
            app::DepthTextureMode__Enum__Class* type_info_ref = nullptr;
        }
        app::DepthTextureMode__Enum__Class** type_info = &type_info_ref;
        inline app::DepthTextureMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::DepthTextureMode__Enum__Class>(type_info, "UnityEngine", "DepthTextureMode");
        }
        inline app::DepthTextureMode__Enum* create() {
            return il2cpp::create_object<app::DepthTextureMode__Enum>(get_class());
        }
    } // namespace DepthTextureMode__Enum
} // namespace app::classes::types
