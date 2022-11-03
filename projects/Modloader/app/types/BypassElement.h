#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace BypassElement {
        namespace {
            inline app::BypassElement__Class* type_info_ref = nullptr;
        }
        inline app::BypassElement__Class** type_info = &type_info_ref;
        inline app::BypassElement__Class* get_class() {
            return il2cpp::get_class<app::BypassElement__Class>(type_info, "System.Net.Configuration", "BypassElement");
        }
        inline app::BypassElement* create() {
            return il2cpp::create_object<app::BypassElement>(get_class());
        }
    } // namespace BypassElement
} // namespace app::classes::types
