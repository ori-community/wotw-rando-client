#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ComboMoveOrderCondition__Enum {
        namespace {
            inline app::ComboMoveOrderCondition__Enum__Class* type_info_ref = nullptr;
        }
        inline app::ComboMoveOrderCondition__Enum__Class** type_info = &type_info_ref;
        inline app::ComboMoveOrderCondition__Enum__Class* get_class() {
            return il2cpp::get_class<app::ComboMoveOrderCondition__Enum__Class>(type_info, "Moon.ComboSystem", "ComboMoveOrderCondition");
        }
        inline app::ComboMoveOrderCondition__Enum* create() {
            return il2cpp::create_object<app::ComboMoveOrderCondition__Enum>(get_class());
        }
    } // namespace ComboMoveOrderCondition__Enum
} // namespace app::classes::types
