#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GuardDecorator_GuardModeType__Enum__Class.h>
#include <Modloader/app/structs/GuardDecorator_GuardModeType__Enum.h>

namespace app::classes::types {
    namespace GuardDecorator_GuardModeType__Enum {
        namespace {
            inline app::GuardDecorator_GuardModeType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::GuardDecorator_GuardModeType__Enum__Class** type_info = &type_info_ref;
        inline app::GuardDecorator_GuardModeType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::GuardDecorator_GuardModeType__Enum__Class>(type_info, "Moon.BehaviourSystem", "GuardDecorator", "GuardModeType");
        }
        inline app::GuardDecorator_GuardModeType__Enum* create() {
            return il2cpp::create_object<app::GuardDecorator_GuardModeType__Enum>(get_class());
        }
    } // namespace GuardDecorator_GuardModeType__Enum
} // namespace app::classes::types
