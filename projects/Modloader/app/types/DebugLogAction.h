#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DebugLogAction__Class.h>
#include <Modloader/app/structs/DebugLogAction.h>

namespace app::classes::types {
    namespace DebugLogAction {
        namespace {
            inline app::DebugLogAction__Class* type_info_ref = nullptr;
        }
        inline app::DebugLogAction__Class** type_info = &type_info_ref;
        inline app::DebugLogAction__Class* get_class() {
            return il2cpp::get_class<app::DebugLogAction__Class>(type_info, "", "DebugLogAction");
        }
        inline app::DebugLogAction* create() {
            return il2cpp::create_object<app::DebugLogAction>(get_class());
        }
    } // namespace DebugLogAction
} // namespace app::classes::types
