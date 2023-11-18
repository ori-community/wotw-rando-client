#pragma once
#include <Modloader/app/structs/SmartGUIText.h>
#include <Modloader/app/structs/SmartGUIText__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SmartGUIText {
        inline app::SmartGUIText__Class** type_info() {
            static app::SmartGUIText__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SmartGUIText__Class**)(modloader::win::memory::resolve_rva(0x0475EA68));
            }
            return cache;
        }
        inline app::SmartGUIText__Class* get_class() {
            return il2cpp::get_class<app::SmartGUIText__Class>(type_info(), "", "SmartGUIText");
        }
        inline app::SmartGUIText* create() {
            return il2cpp::create_object<app::SmartGUIText>(get_class());
        }
    } // namespace SmartGUIText
} // namespace app::classes::types
