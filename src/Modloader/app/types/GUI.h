#pragma once
#include <Modloader/app/structs/GUI.h>
#include <Modloader/app/structs/GUI__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GUI {
        inline app::GUI__Class** type_info() {
            static app::GUI__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GUI__Class**)(modloader::win::memory::resolve_rva(0x0476D9C8));
            }
            return cache;
        }
        inline app::GUI__Class* get_class() {
            return il2cpp::get_class<app::GUI__Class>(type_info(), "UnityEngine", "GUI");
        }
        inline app::GUI* create() {
            return il2cpp::create_object<app::GUI>(get_class());
        }
    } // namespace GUI
} // namespace app::classes::types
