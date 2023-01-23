#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UWPIdentityUI__Class.h>
#include <Modloader/app/structs/UWPIdentityUI.h>

namespace app::classes::types {
    namespace UWPIdentityUI {
        inline app::UWPIdentityUI__Class** type_info = (app::UWPIdentityUI__Class**)(modloader::win::memory::resolve_rva(0x0475A270));
        inline app::UWPIdentityUI__Class* get_class() {
            return il2cpp::get_class<app::UWPIdentityUI__Class>(type_info, "", "UWPIdentityUI");
        }
        inline app::UWPIdentityUI* create() {
            return il2cpp::create_object<app::UWPIdentityUI>(get_class());
        }
    } // namespace UWPIdentityUI
} // namespace app::classes::types
