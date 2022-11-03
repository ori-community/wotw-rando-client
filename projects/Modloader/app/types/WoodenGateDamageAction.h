#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace WoodenGateDamageAction {
        namespace {
            inline app::WoodenGateDamageAction__Class* type_info_ref = nullptr;
        }
        inline app::WoodenGateDamageAction__Class** type_info = &type_info_ref;
        inline app::WoodenGateDamageAction__Class* get_class() {
            return il2cpp::get_class<app::WoodenGateDamageAction__Class>(type_info, "", "WoodenGateDamageAction");
        }
        inline app::WoodenGateDamageAction* create() {
            return il2cpp::create_object<app::WoodenGateDamageAction>(get_class());
        }
    } // namespace WoodenGateDamageAction
} // namespace app::classes::types
