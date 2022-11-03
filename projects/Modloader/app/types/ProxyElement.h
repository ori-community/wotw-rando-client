#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ProxyElement {
        namespace {
            inline app::ProxyElement__Class* type_info_ref = nullptr;
        }
        inline app::ProxyElement__Class** type_info = &type_info_ref;
        inline app::ProxyElement__Class* get_class() {
            return il2cpp::get_class<app::ProxyElement__Class>(type_info, "System.Net.Configuration", "ProxyElement");
        }
        inline app::ProxyElement* create() {
            return il2cpp::create_object<app::ProxyElement>(get_class());
        }
    } // namespace ProxyElement
} // namespace app::classes::types
