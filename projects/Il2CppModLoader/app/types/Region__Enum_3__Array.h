#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Region__Enum_3__Array {
        namespace {
            inline app::Region__Enum_3__Array__Class* type_info_ref = nullptr;
        }
        inline app::Region__Enum_3__Array__Class** type_info = &type_info_ref;
        inline app::Region__Enum_3__Array__Class* get_class() {
            return il2cpp::get_class<app::Region__Enum_3__Array__Class>(type_info, "PlayFab.PlayStreamModels", "Region[]");
        }
        inline app::Region__Enum_3__Array* create() {
            return il2cpp::create_object<app::Region__Enum_3__Array>(get_class());
        }
    } // namespace Region__Enum_3__Array
} // namespace app::classes::types
