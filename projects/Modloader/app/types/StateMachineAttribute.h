#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/StateMachineAttribute__Class.h>
#include <Modloader/app/structs/StateMachineAttribute.h>

namespace app::classes::types {
    namespace StateMachineAttribute {
        namespace {
            inline app::StateMachineAttribute__Class* type_info_ref = nullptr;
        }
        inline app::StateMachineAttribute__Class** type_info = &type_info_ref;
        inline app::StateMachineAttribute__Class* get_class() {
            return il2cpp::get_class<app::StateMachineAttribute__Class>(type_info, "System.Runtime.CompilerServices", "StateMachineAttribute");
        }
        inline app::StateMachineAttribute* create() {
            return il2cpp::create_object<app::StateMachineAttribute>(get_class());
        }
    } // namespace StateMachineAttribute
} // namespace app::classes::types
