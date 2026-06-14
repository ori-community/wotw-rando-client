#pragma once
#include <Modloader/app/structs/SetBooleanAction_BoolSetModes__Enum.h>
#include <Modloader/app/structs/SetBooleanAction_BoolSetModes__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SetBooleanAction_BoolSetModes__Enum {
        inline app::SetBooleanAction_BoolSetModes__Enum__Class** type_info() {
            static app::SetBooleanAction_BoolSetModes__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SetBooleanAction_BoolSetModes__Enum__Class**)(modloader::win::memory::resolve_rva(0x04730598));
            }
            return cache;
        }
        inline app::SetBooleanAction_BoolSetModes__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SetBooleanAction_BoolSetModes__Enum__Class>(type_info(), "Moon.BehaviourSystem", "SetBooleanAction", "BoolSetModes");
        }
        inline app::SetBooleanAction_BoolSetModes__Enum* create() {
            return il2cpp::create_object<app::SetBooleanAction_BoolSetModes__Enum>(get_class());
        }
    } // namespace SetBooleanAction_BoolSetModes__Enum
} // namespace app::classes::types
