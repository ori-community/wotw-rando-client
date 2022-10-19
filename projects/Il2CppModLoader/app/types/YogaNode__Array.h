#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace YogaNode__Array {
        namespace {
            inline app::YogaNode__Array__Class* type_info_ref = nullptr;
        }
        inline app::YogaNode__Array__Class** type_info = &type_info_ref;
        inline app::YogaNode__Array__Class* get_class() {
            return il2cpp::get_class<app::YogaNode__Array__Class>(type_info, "UnityEngine.Yoga", "YogaNode[]");
        }
        inline app::YogaNode__Array* create() {
            return il2cpp::create_object<app::YogaNode__Array>(get_class());
        }
    } // namespace YogaNode__Array
} // namespace app::classes::types
