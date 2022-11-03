#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace EditorDebug {
        inline app::EditorDebug__Class** type_info = (app::EditorDebug__Class**)(modloader::win::memory::resolve_rva(0x0476E080));
        inline app::EditorDebug__Class* get_class() {
            return il2cpp::get_class<app::EditorDebug__Class>(type_info, "", "EditorDebug");
        }
        inline app::EditorDebug* create() {
            return il2cpp::create_object<app::EditorDebug>(get_class());
        }
    } // namespace EditorDebug
} // namespace app::classes::types
