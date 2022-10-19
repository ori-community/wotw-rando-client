#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinLogicCycle_StateFlags__Enum {
        namespace {
            inline app::SeinLogicCycle_StateFlags__Enum__Class* type_info_ref = nullptr;
        }
        inline app::SeinLogicCycle_StateFlags__Enum__Class** type_info = &type_info_ref;
        inline app::SeinLogicCycle_StateFlags__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinLogicCycle_StateFlags__Enum__Class>(type_info, "", "SeinLogicCycle", "StateFlags");
        }
        inline app::SeinLogicCycle_StateFlags__Enum* create() {
            return il2cpp::create_object<app::SeinLogicCycle_StateFlags__Enum>(get_class());
        }
        inline app::SeinLogicCycle_StateFlags__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::SeinLogicCycle_StateFlags__Enum__Array>(get_class(), size);
        }
        inline app::SeinLogicCycle_StateFlags__Enum__Array* create_array(const std::vector<app::SeinLogicCycle_StateFlags__Enum*>& items) {
            return il2cpp::array_new<app::SeinLogicCycle_StateFlags__Enum__Array>(get_class(), items);
        }
    } // namespace SeinLogicCycle_StateFlags__Enum
} // namespace app::classes::types
