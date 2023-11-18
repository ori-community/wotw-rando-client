#pragma once
#include <Modloader/app/structs/BrowserNative_FrameCommand__Enum.h>
#include <Modloader/app/structs/BrowserNative_FrameCommand__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BrowserNative_FrameCommand__Enum {
        inline app::BrowserNative_FrameCommand__Enum__Class** type_info() {
            static app::BrowserNative_FrameCommand__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BrowserNative_FrameCommand__Enum__Class**)(modloader::win::memory::resolve_rva(0x04725368));
            }
            return cache;
        }
        inline app::BrowserNative_FrameCommand__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::BrowserNative_FrameCommand__Enum__Class>(type_info(), "ZenFulcrum.EmbeddedBrowser", "BrowserNative", "FrameCommand");
        }
        inline app::BrowserNative_FrameCommand__Enum* create() {
            return il2cpp::create_object<app::BrowserNative_FrameCommand__Enum>(get_class());
        }
    } // namespace BrowserNative_FrameCommand__Enum
} // namespace app::classes::types
