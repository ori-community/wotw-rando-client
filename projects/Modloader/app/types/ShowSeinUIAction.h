#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ShowSeinUIAction__Class.h>
#include <Modloader/app/structs/ShowSeinUIAction.h>

namespace app::classes::types {
    namespace ShowSeinUIAction {
        namespace {
            inline app::ShowSeinUIAction__Class* type_info_ref = nullptr;
        }
        inline app::ShowSeinUIAction__Class** type_info = &type_info_ref;
        inline app::ShowSeinUIAction__Class* get_class() {
            return il2cpp::get_class<app::ShowSeinUIAction__Class>(type_info, "", "ShowSeinUIAction");
        }
        inline app::ShowSeinUIAction* create() {
            return il2cpp::create_object<app::ShowSeinUIAction>(get_class());
        }
    } // namespace ShowSeinUIAction
} // namespace app::classes::types
