#pragma once
#include <Modloader/app/structs/GUITargetAttribute.h>
#include <Modloader/app/structs/GUITargetAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GUITargetAttribute {
        inline app::GUITargetAttribute__Class** type_info() {
            static app::GUITargetAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GUITargetAttribute__Class**)(modloader::win::memory::resolve_rva(0x0474BB50));
            }
            return cache;
        }
        inline app::GUITargetAttribute__Class* get_class() {
            return il2cpp::get_class<app::GUITargetAttribute__Class>(type_info(), "UnityEngine", "GUITargetAttribute");
        }
        inline app::GUITargetAttribute* create() {
            return il2cpp::create_object<app::GUITargetAttribute>(get_class());
        }
    } // namespace GUITargetAttribute
} // namespace app::classes::types
