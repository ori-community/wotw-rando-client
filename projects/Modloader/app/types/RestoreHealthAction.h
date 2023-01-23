#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RestoreHealthAction__Class.h>
#include <Modloader/app/structs/RestoreHealthAction.h>

namespace app::classes::types {
    namespace RestoreHealthAction {
        namespace {
            inline app::RestoreHealthAction__Class* type_info_ref = nullptr;
        }
        inline app::RestoreHealthAction__Class** type_info = &type_info_ref;
        inline app::RestoreHealthAction__Class* get_class() {
            return il2cpp::get_class<app::RestoreHealthAction__Class>(type_info, "", "RestoreHealthAction");
        }
        inline app::RestoreHealthAction* create() {
            return il2cpp::create_object<app::RestoreHealthAction>(get_class());
        }
    } // namespace RestoreHealthAction
} // namespace app::classes::types
