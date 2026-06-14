#pragma once
#include <Modloader/app/structs/GUILayoutGroup.h>
#include <Modloader/app/structs/GUILayoutGroup__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GUILayoutGroup {
        inline app::GUILayoutGroup__Class** type_info() {
            static app::GUILayoutGroup__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GUILayoutGroup__Class**)(modloader::win::memory::resolve_rva(0x04768D30));
            }
            return cache;
        }
        inline app::GUILayoutGroup__Class* get_class() {
            return il2cpp::get_class<app::GUILayoutGroup__Class>(type_info(), "UnityEngine", "GUILayoutGroup");
        }
        inline app::GUILayoutGroup* create() {
            return il2cpp::create_object<app::GUILayoutGroup>(get_class());
        }
    } // namespace GUILayoutGroup
} // namespace app::classes::types
