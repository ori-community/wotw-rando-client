#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TextDebugMenuItem {
        inline app::TextDebugMenuItem__Class** type_info = (app::TextDebugMenuItem__Class**)(modloader::win::memory::resolve_rva(0x04788750));
        inline app::TextDebugMenuItem__Class* get_class() {
            return il2cpp::get_class<app::TextDebugMenuItem__Class>(type_info, "", "TextDebugMenuItem");
        }
        inline app::TextDebugMenuItem* create() {
            return il2cpp::create_object<app::TextDebugMenuItem>(get_class());
        }
    } // namespace TextDebugMenuItem
} // namespace app::classes::types
