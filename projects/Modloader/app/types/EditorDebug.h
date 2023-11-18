#pragma once
#include <Modloader/app/structs/EditorDebug.h>
#include <Modloader/app/structs/EditorDebug__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EditorDebug {
        inline app::EditorDebug__Class** type_info() {
            static app::EditorDebug__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EditorDebug__Class**)(modloader::win::memory::resolve_rva(0x0476E080));
            }
            return cache;
        }
        inline app::EditorDebug__Class* get_class() {
            return il2cpp::get_class<app::EditorDebug__Class>(type_info(), "", "EditorDebug");
        }
        inline app::EditorDebug* create() {
            return il2cpp::create_object<app::EditorDebug>(get_class());
        }
    } // namespace EditorDebug
} // namespace app::classes::types
