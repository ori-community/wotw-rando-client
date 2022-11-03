#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace WebRequestPrefixElement {
        inline app::WebRequestPrefixElement__Class** type_info = (app::WebRequestPrefixElement__Class**)(modloader::win::memory::resolve_rva(0x047263B0));
        inline app::WebRequestPrefixElement__Class* get_class() {
            return il2cpp::get_class<app::WebRequestPrefixElement__Class>(type_info, "System.Net", "WebRequestPrefixElement");
        }
        inline app::WebRequestPrefixElement* create() {
            return il2cpp::create_object<app::WebRequestPrefixElement>(get_class());
        }
    } // namespace WebRequestPrefixElement
} // namespace app::classes::types
