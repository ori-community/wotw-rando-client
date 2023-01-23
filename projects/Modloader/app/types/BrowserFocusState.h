#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/BrowserFocusState__Class.h>
#include <Modloader/app/structs/BrowserFocusState.h>

namespace app::classes::types {
    namespace BrowserFocusState {
        inline app::BrowserFocusState__Class** type_info = (app::BrowserFocusState__Class**)(modloader::win::memory::resolve_rva(0x0470B460));
        inline app::BrowserFocusState__Class* get_class() {
            return il2cpp::get_class<app::BrowserFocusState__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "BrowserFocusState");
        }
        inline app::BrowserFocusState* create() {
            return il2cpp::create_object<app::BrowserFocusState>(get_class());
        }
    } // namespace BrowserFocusState
} // namespace app::classes::types
