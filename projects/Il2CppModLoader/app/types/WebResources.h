#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace WebResources {
        inline app::WebResources__Class** type_info = (app::WebResources__Class**)(modloader::win::memory::resolve_rva(0x04733098));
        inline app::WebResources__Class* get_class() {
            return il2cpp::get_class<app::WebResources__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "WebResources");
        }
        inline app::WebResources* create() {
            return il2cpp::create_object<app::WebResources>(get_class());
        }
    } // namespace WebResources
} // namespace app::classes::types
