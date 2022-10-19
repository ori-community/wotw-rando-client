#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BrowserInput {
        inline app::BrowserInput__Class** type_info = (app::BrowserInput__Class**)(modloader::win::memory::resolve_rva(0x0471F010));
        inline app::BrowserInput__Class* get_class() {
            return il2cpp::get_class<app::BrowserInput__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "BrowserInput");
        }
        inline app::BrowserInput* create() {
            return il2cpp::create_object<app::BrowserInput>(get_class());
        }
    } // namespace BrowserInput
} // namespace app::classes::types
