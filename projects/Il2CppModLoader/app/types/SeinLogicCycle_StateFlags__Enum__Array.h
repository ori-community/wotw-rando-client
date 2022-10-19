#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinLogicCycle_StateFlags__Enum__Array {
        namespace {
            inline app::SeinLogicCycle_StateFlags__Enum__Array__Class* type_info_ref = nullptr;
        }
        inline app::SeinLogicCycle_StateFlags__Enum__Array__Class** type_info = &type_info_ref;
        inline app::SeinLogicCycle_StateFlags__Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::SeinLogicCycle_StateFlags__Enum__Array__Class>(type_info, "", "SeinLogicCycle+StateFlags[]");
        }
        inline app::SeinLogicCycle_StateFlags__Enum__Array* create() {
            return il2cpp::create_object<app::SeinLogicCycle_StateFlags__Enum__Array>(get_class());
        }
    } // namespace SeinLogicCycle_StateFlags__Enum__Array
} // namespace app::classes::types
