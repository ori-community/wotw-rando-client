#pragma once
#include <Modloader/app/structs/BrowserNative_DialogType__Enum.h>
#include <Modloader/app/structs/BrowserNative_DialogType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BrowserNative_DialogType__Enum {
        inline app::BrowserNative_DialogType__Enum__Class** type_info() {
            static app::BrowserNative_DialogType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BrowserNative_DialogType__Enum__Class**)(modloader::win::memory::resolve_rva(0x04798180));
            }
            return cache;
        }
        inline app::BrowserNative_DialogType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::BrowserNative_DialogType__Enum__Class>(type_info(), "ZenFulcrum.EmbeddedBrowser", "BrowserNative", "DialogType");
        }
        inline app::BrowserNative_DialogType__Enum* create() {
            return il2cpp::create_object<app::BrowserNative_DialogType__Enum>(get_class());
        }
    } // namespace BrowserNative_DialogType__Enum
} // namespace app::classes::types
