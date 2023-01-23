#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/BrowserNative_Calltype_zfb_createBrowser__Class.h>
#include <Modloader/app/structs/BrowserNative_Calltype_zfb_createBrowser.h>

namespace app::classes::types {
    namespace BrowserNative_Calltype_zfb_createBrowser {
        namespace {
            inline app::BrowserNative_Calltype_zfb_createBrowser__Class* type_info_ref = nullptr;
        }
        inline app::BrowserNative_Calltype_zfb_createBrowser__Class** type_info = &type_info_ref;
        inline app::BrowserNative_Calltype_zfb_createBrowser__Class* get_class() {
            return il2cpp::get_nested_class<app::BrowserNative_Calltype_zfb_createBrowser__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "BrowserNative", "Calltype_zfb_createBrowser");
        }
        inline app::BrowserNative_Calltype_zfb_createBrowser* create() {
            return il2cpp::create_object<app::BrowserNative_Calltype_zfb_createBrowser>(get_class());
        }
    } // namespace BrowserNative_Calltype_zfb_createBrowser
} // namespace app::classes::types
