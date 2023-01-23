#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LaunchCartFromStopperAction__Class.h>
#include <Modloader/app/structs/LaunchCartFromStopperAction.h>

namespace app::classes::types {
    namespace LaunchCartFromStopperAction {
        namespace {
            inline app::LaunchCartFromStopperAction__Class* type_info_ref = nullptr;
        }
        inline app::LaunchCartFromStopperAction__Class** type_info = &type_info_ref;
        inline app::LaunchCartFromStopperAction__Class* get_class() {
            return il2cpp::get_class<app::LaunchCartFromStopperAction__Class>(type_info, "", "LaunchCartFromStopperAction");
        }
        inline app::LaunchCartFromStopperAction* create() {
            return il2cpp::create_object<app::LaunchCartFromStopperAction>(get_class());
        }
    } // namespace LaunchCartFromStopperAction
} // namespace app::classes::types
