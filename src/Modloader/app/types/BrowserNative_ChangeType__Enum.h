#pragma once
#include <Modloader/app/structs/BrowserNative_ChangeType__Enum.h>
#include <Modloader/app/structs/BrowserNative_ChangeType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BrowserNative_ChangeType__Enum {
        inline app::BrowserNative_ChangeType__Enum__Class** type_info() {
            static app::BrowserNative_ChangeType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BrowserNative_ChangeType__Enum__Class**)(modloader::win::memory::resolve_rva(0x04763218));
            }
            return cache;
        }
        inline app::BrowserNative_ChangeType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::BrowserNative_ChangeType__Enum__Class>(type_info(), "ZenFulcrum.EmbeddedBrowser", "BrowserNative", "ChangeType");
        }
        inline app::BrowserNative_ChangeType__Enum* create() {
            return il2cpp::create_object<app::BrowserNative_ChangeType__Enum>(get_class());
        }
    } // namespace BrowserNative_ChangeType__Enum
} // namespace app::classes::types
