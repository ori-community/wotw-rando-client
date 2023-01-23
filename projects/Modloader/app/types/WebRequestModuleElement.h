#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/WebRequestModuleElement__Class.h>
#include <Modloader/app/structs/WebRequestModuleElement.h>

namespace app::classes::types {
    namespace WebRequestModuleElement {
        namespace {
            inline app::WebRequestModuleElement__Class* type_info_ref = nullptr;
        }
        inline app::WebRequestModuleElement__Class** type_info = &type_info_ref;
        inline app::WebRequestModuleElement__Class* get_class() {
            return il2cpp::get_class<app::WebRequestModuleElement__Class>(type_info, "System.Net.Configuration", "WebRequestModuleElement");
        }
        inline app::WebRequestModuleElement* create() {
            return il2cpp::create_object<app::WebRequestModuleElement>(get_class());
        }
    } // namespace WebRequestModuleElement
} // namespace app::classes::types
