#pragma once
#include <Modloader/app/structs/GUIStateObjects.h>
#include <Modloader/app/structs/GUIStateObjects__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GUIStateObjects {
        inline app::GUIStateObjects__Class** type_info() {
            static app::GUIStateObjects__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GUIStateObjects__Class**)(modloader::win::memory::resolve_rva(0x04705EC0));
            }
            return cache;
        }
        inline app::GUIStateObjects__Class* get_class() {
            return il2cpp::get_class<app::GUIStateObjects__Class>(type_info(), "UnityEngine", "GUIStateObjects");
        }
        inline app::GUIStateObjects* create() {
            return il2cpp::create_object<app::GUIStateObjects>(get_class());
        }
    } // namespace GUIStateObjects
} // namespace app::classes::types
