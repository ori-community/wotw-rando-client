#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MovePivotAlert {
        namespace {
            inline app::MovePivotAlert__Class* type_info_ref = nullptr;
        }
        inline app::MovePivotAlert__Class** type_info = &type_info_ref;
        inline app::MovePivotAlert__Class* get_class() {
            return il2cpp::get_class<app::MovePivotAlert__Class>(type_info, "", "MovePivotAlert");
        }
        inline app::MovePivotAlert* create() {
            return il2cpp::create_object<app::MovePivotAlert>(get_class());
        }
    } // namespace MovePivotAlert
} // namespace app::classes::types
