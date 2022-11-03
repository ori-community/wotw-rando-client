#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XboxOneIdentityUI {
        namespace {
            inline app::XboxOneIdentityUI__Class* type_info_ref = nullptr;
        }
        inline app::XboxOneIdentityUI__Class** type_info = &type_info_ref;
        inline app::XboxOneIdentityUI__Class* get_class() {
            return il2cpp::get_class<app::XboxOneIdentityUI__Class>(type_info, "", "XboxOneIdentityUI");
        }
        inline app::XboxOneIdentityUI* create() {
            return il2cpp::create_object<app::XboxOneIdentityUI>(get_class());
        }
    } // namespace XboxOneIdentityUI
} // namespace app::classes::types
