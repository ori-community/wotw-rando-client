#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VRTextureUsage__Enum {
        namespace {
            app::VRTextureUsage__Enum__Class* type_info_ref = nullptr;
        }
        app::VRTextureUsage__Enum__Class** type_info = &type_info_ref;
        inline app::VRTextureUsage__Enum__Class* get_class() {
            return il2cpp::get_class<app::VRTextureUsage__Enum__Class>(type_info, "UnityEngine", "VRTextureUsage");
        }
        inline app::VRTextureUsage__Enum* create() {
            return il2cpp::create_object<app::VRTextureUsage__Enum>(get_class());
        }
    } // namespace VRTextureUsage__Enum
} // namespace app::classes::types
