#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ExternalKeyboard_FindAndListenForBrowsers_d_15 {
        inline app::ExternalKeyboard_FindAndListenForBrowsers_d_15__Class** type_info = (app::ExternalKeyboard_FindAndListenForBrowsers_d_15__Class**)(modloader::win::memory::resolve_rva(0x047433D8));
        inline app::ExternalKeyboard_FindAndListenForBrowsers_d_15__Class* get_class() {
            return il2cpp::get_nested_class<app::ExternalKeyboard_FindAndListenForBrowsers_d_15__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "ExternalKeyboard", "<FindAndListenForBrowsers>d__15");
        }
        inline app::ExternalKeyboard_FindAndListenForBrowsers_d_15* create() {
            return il2cpp::create_object<app::ExternalKeyboard_FindAndListenForBrowsers_d_15>(get_class());
        }
    } // namespace ExternalKeyboard_FindAndListenForBrowsers_d_15
} // namespace app::classes::types
