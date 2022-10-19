#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RailType__Enum__Array {
        namespace {
            inline app::RailType__Enum__Array__Class* type_info_ref = nullptr;
        }
        inline app::RailType__Enum__Array__Class** type_info = &type_info_ref;
        inline app::RailType__Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::RailType__Enum__Array__Class>(type_info, "", "RailType[]");
        }
        inline app::RailType__Enum__Array* create() {
            return il2cpp::create_object<app::RailType__Enum__Array>(get_class());
        }
    } // namespace RailType__Enum__Array
} // namespace app::classes::types
