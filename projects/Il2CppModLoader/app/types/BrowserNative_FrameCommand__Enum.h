#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BrowserNative_FrameCommand__Enum {
        inline app::BrowserNative_FrameCommand__Enum__Class** type_info = (app::BrowserNative_FrameCommand__Enum__Class**)(modloader::win::memory::resolve_rva(0x04725368));
        inline app::BrowserNative_FrameCommand__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::BrowserNative_FrameCommand__Enum__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "BrowserNative", "FrameCommand");
        }
        inline app::BrowserNative_FrameCommand__Enum* create() {
            return il2cpp::create_object<app::BrowserNative_FrameCommand__Enum>(get_class());
        }
    } // namespace BrowserNative_FrameCommand__Enum
} // namespace app::classes::types
