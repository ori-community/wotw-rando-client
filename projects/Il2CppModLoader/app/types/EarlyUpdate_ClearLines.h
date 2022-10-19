#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EarlyUpdate_ClearLines {
        namespace {
            inline app::EarlyUpdate_ClearLines__Class* type_info_ref = nullptr;
        }
        inline app::EarlyUpdate_ClearLines__Class** type_info = &type_info_ref;
        inline app::EarlyUpdate_ClearLines__Class* get_class() {
            return il2cpp::get_nested_class<app::EarlyUpdate_ClearLines__Class>(type_info, "UnityEngine.Experimental.PlayerLoop", "EarlyUpdate", "ClearLines");
        }
        inline app::EarlyUpdate_ClearLines* create() {
            return il2cpp::create_object<app::EarlyUpdate_ClearLines>(get_class());
        }
        inline app::EarlyUpdate_ClearLines__Boxed* box(app::EarlyUpdate_ClearLines value) {
            return il2cpp::box_value<app::EarlyUpdate_ClearLines__Boxed>(get_class(), value);
        }
    } // namespace EarlyUpdate_ClearLines
} // namespace app::classes::types
