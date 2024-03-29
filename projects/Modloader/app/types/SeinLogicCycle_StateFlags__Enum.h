#pragma once
#include <Modloader/app/structs/SeinLogicCycle_StateFlags__Enum.h>
#include <Modloader/app/structs/SeinLogicCycle_StateFlags__Enum__Array.h>
#include <Modloader/app/structs/SeinLogicCycle_StateFlags__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinLogicCycle_StateFlags__Enum {
        inline app::SeinLogicCycle_StateFlags__Enum__Class** type_info() {
            static app::SeinLogicCycle_StateFlags__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinLogicCycle_StateFlags__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinLogicCycle_StateFlags__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinLogicCycle_StateFlags__Enum__Class>(type_info(), "", "SeinLogicCycle", "StateFlags");
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
