#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UserWindowsHelloInfo__Class.h>
#include <Modloader/app/structs/UserWindowsHelloInfo.h>

namespace app::classes::types {
    namespace UserWindowsHelloInfo {
        inline app::UserWindowsHelloInfo__Class** type_info = (app::UserWindowsHelloInfo__Class**)(modloader::win::memory::resolve_rva(0x04736950));
        inline app::UserWindowsHelloInfo__Class* get_class() {
            return il2cpp::get_class<app::UserWindowsHelloInfo__Class>(type_info, "PlayFab.ClientModels", "UserWindowsHelloInfo");
        }
        inline app::UserWindowsHelloInfo* create() {
            return il2cpp::create_object<app::UserWindowsHelloInfo>(get_class());
        }
    } // namespace UserWindowsHelloInfo
} // namespace app::classes::types
