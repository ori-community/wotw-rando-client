#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace OnObjectStartRunAction {
        namespace {
            inline app::OnObjectStartRunAction__Class* type_info_ref = nullptr;
        }
        inline app::OnObjectStartRunAction__Class** type_info = &type_info_ref;
        inline app::OnObjectStartRunAction__Class* get_class() {
            return il2cpp::get_class<app::OnObjectStartRunAction__Class>(type_info, "", "OnObjectStartRunAction");
        }
        inline app::OnObjectStartRunAction* create() {
            return il2cpp::create_object<app::OnObjectStartRunAction>(get_class());
        }
    } // namespace OnObjectStartRunAction
} // namespace app::classes::types
