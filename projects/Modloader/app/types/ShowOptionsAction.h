#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShowOptionsAction {
        namespace {
            inline app::ShowOptionsAction__Class* type_info_ref = nullptr;
        }
        inline app::ShowOptionsAction__Class** type_info = &type_info_ref;
        inline app::ShowOptionsAction__Class* get_class() {
            return il2cpp::get_class<app::ShowOptionsAction__Class>(type_info, "", "ShowOptionsAction");
        }
        inline app::ShowOptionsAction* create() {
            return il2cpp::create_object<app::ShowOptionsAction>(get_class());
        }
    } // namespace ShowOptionsAction
} // namespace app::classes::types
