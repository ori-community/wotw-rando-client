#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TransformAccess {
        namespace {
            inline app::TransformAccess__Class* type_info_ref = nullptr;
        }
        inline app::TransformAccess__Class** type_info = &type_info_ref;
        inline app::TransformAccess__Class* get_class() {
            return il2cpp::get_class<app::TransformAccess__Class>(type_info, "UnityEngine.Jobs", "TransformAccess");
        }
        inline app::TransformAccess* create() {
            return il2cpp::create_object<app::TransformAccess>(get_class());
        }
        inline app::TransformAccess__Boxed* box(app::TransformAccess value) {
            return il2cpp::box_value<app::TransformAccess__Boxed>(get_class(), value);
        }
    } // namespace TransformAccess
} // namespace app::classes::types
