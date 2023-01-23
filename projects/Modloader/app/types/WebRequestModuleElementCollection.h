#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/WebRequestModuleElementCollection__Class.h>
#include <Modloader/app/structs/WebRequestModuleElementCollection.h>

namespace app::classes::types {
    namespace WebRequestModuleElementCollection {
        namespace {
            inline app::WebRequestModuleElementCollection__Class* type_info_ref = nullptr;
        }
        inline app::WebRequestModuleElementCollection__Class** type_info = &type_info_ref;
        inline app::WebRequestModuleElementCollection__Class* get_class() {
            return il2cpp::get_class<app::WebRequestModuleElementCollection__Class>(type_info, "System.Net.Configuration", "WebRequestModuleElementCollection");
        }
        inline app::WebRequestModuleElementCollection* create() {
            return il2cpp::create_object<app::WebRequestModuleElementCollection>(get_class());
        }
    } // namespace WebRequestModuleElementCollection
} // namespace app::classes::types
