#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MovedFromAttribute {
        namespace {
            inline app::MovedFromAttribute__Class* type_info_ref = nullptr;
        }
        inline app::MovedFromAttribute__Class** type_info = &type_info_ref;
        inline app::MovedFromAttribute__Class* get_class() {
            return il2cpp::get_class<app::MovedFromAttribute__Class>(type_info, "UnityEngine.Scripting.APIUpdating", "MovedFromAttribute");
        }
        inline app::MovedFromAttribute* create() {
            return il2cpp::create_object<app::MovedFromAttribute>(get_class());
        }
    } // namespace MovedFromAttribute
} // namespace app::classes::types
