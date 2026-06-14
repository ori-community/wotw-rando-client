#pragma once
#include <Modloader/app/structs/GUILayoutOption.h>
#include <Modloader/app/structs/GUILayoutOption__Array.h>
#include <Modloader/app/structs/GUILayoutOption__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GUILayoutOption {
        inline app::GUILayoutOption__Class** type_info() {
            static app::GUILayoutOption__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GUILayoutOption__Class**)(modloader::win::memory::resolve_rva(0x04768BB0));
            }
            return cache;
        }
        inline app::GUILayoutOption__Class* get_class() {
            return il2cpp::get_class<app::GUILayoutOption__Class>(type_info(), "UnityEngine", "GUILayoutOption");
        }
        inline app::GUILayoutOption* create() {
            return il2cpp::create_object<app::GUILayoutOption>(get_class());
        }
        inline app::GUILayoutOption__Array* create_array(int size) {
            return il2cpp::array_new<app::GUILayoutOption__Array>(get_class(), size);
        }
        inline app::GUILayoutOption__Array* create_array(const std::vector<app::GUILayoutOption*>& items) {
            return il2cpp::array_new<app::GUILayoutOption__Array>(get_class(), items);
        }
    } // namespace GUILayoutOption
} // namespace app::classes::types
