#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AttachToRopeAction {
        namespace {
            inline app::AttachToRopeAction__Class* type_info_ref = nullptr;
        }
        inline app::AttachToRopeAction__Class** type_info = &type_info_ref;
        inline app::AttachToRopeAction__Class* get_class() {
            return il2cpp::get_class<app::AttachToRopeAction__Class>(type_info, "", "AttachToRopeAction");
        }
        inline app::AttachToRopeAction* create() {
            return il2cpp::create_object<app::AttachToRopeAction>(get_class());
        }
    } // namespace AttachToRopeAction
} // namespace app::classes::types
