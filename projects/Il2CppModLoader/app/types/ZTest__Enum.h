#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ZTest__Enum {
        namespace {
            app::ZTest__Enum__Class* type_info_ref = nullptr;
        }
        app::ZTest__Enum__Class** type_info = &type_info_ref;
        inline app::ZTest__Enum__Class* get_class() {
            return il2cpp::get_class<app::ZTest__Enum__Class>(type_info, "UnityEngine.Rendering", "ZTest");
        }
        inline app::ZTest__Enum* create() {
            return il2cpp::create_object<app::ZTest__Enum>(get_class());
        }
    } // namespace ZTest__Enum
} // namespace app::classes::types
