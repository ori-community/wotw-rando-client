#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XboxLiveIdentityUI__Class.h>
#include <Modloader/app/structs/XboxLiveIdentityUI.h>

namespace app::classes::types {
    namespace XboxLiveIdentityUI {
        namespace {
            inline app::XboxLiveIdentityUI__Class* type_info_ref = nullptr;
        }
        inline app::XboxLiveIdentityUI__Class** type_info = &type_info_ref;
        inline app::XboxLiveIdentityUI__Class* get_class() {
            return il2cpp::get_class<app::XboxLiveIdentityUI__Class>(type_info, "", "XboxLiveIdentityUI");
        }
        inline app::XboxLiveIdentityUI* create() {
            return il2cpp::create_object<app::XboxLiveIdentityUI>(get_class());
        }
    } // namespace XboxLiveIdentityUI
} // namespace app::classes::types
