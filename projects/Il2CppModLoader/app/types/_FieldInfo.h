#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace _FieldInfo {
        namespace {
            app::_FieldInfo__Class* type_info_ref = nullptr;
        }
        app::_FieldInfo__Class** type_info = &type_info_ref;
        inline app::_FieldInfo__Class* get_class() {
            return il2cpp::get_class<app::_FieldInfo__Class>(type_info, "System.Runtime.InteropServices", "_FieldInfo");
        }
        inline app::_FieldInfo* create() {
            return il2cpp::create_object<app::_FieldInfo>(get_class());
        }
    } // namespace _FieldInfo
} // namespace app::classes::types
