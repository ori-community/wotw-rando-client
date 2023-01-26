#pragma once
#include <Modloader/app/structs/DebugGUIText.h>
#include <Modloader/app/structs/DebugGUIText__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DebugGUIText {
        inline app::DebugGUIText__Class** type_info() {
            static app::DebugGUIText__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DebugGUIText__Class**)(modloader::win::memory::resolve_rva(0x0472B9B0));
            }
            return cache;
        }
        inline app::DebugGUIText__Class* get_class() {
            return il2cpp::get_class<app::DebugGUIText__Class>(type_info(), "", "DebugGUIText");
        }
        inline app::DebugGUIText* create() {
            return il2cpp::create_object<app::DebugGUIText>(get_class());
        }
    } // namespace DebugGUIText
} // namespace app::classes::types
