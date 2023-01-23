#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/BrowserNative_NewWindowAction__Enum__Class.h>
#include <Modloader/app/structs/BrowserNative_NewWindowAction__Enum.h>

namespace app::classes::types {
    namespace BrowserNative_NewWindowAction__Enum {
        inline app::BrowserNative_NewWindowAction__Enum__Class** type_info = (app::BrowserNative_NewWindowAction__Enum__Class**)(modloader::win::memory::resolve_rva(0x0470DAA0));
        inline app::BrowserNative_NewWindowAction__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::BrowserNative_NewWindowAction__Enum__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "BrowserNative", "NewWindowAction");
        }
        inline app::BrowserNative_NewWindowAction__Enum* create() {
            return il2cpp::create_object<app::BrowserNative_NewWindowAction__Enum>(get_class());
        }
    } // namespace BrowserNative_NewWindowAction__Enum
} // namespace app::classes::types
