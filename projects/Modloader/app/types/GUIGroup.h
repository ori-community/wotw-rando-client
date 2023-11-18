#pragma once
#include <Modloader/app/structs/GUIGroup.h>
#include <Modloader/app/structs/GUIGroup__Boxed.h>
#include <Modloader/app/structs/GUIGroup__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GUIGroup {
        inline app::GUIGroup__Class** type_info() {
            static app::GUIGroup__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GUIGroup__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GUIGroup__Class* get_class() {
            return il2cpp::get_class<app::GUIGroup__Class>(type_info(), "Sini.Unity", "GUIGroup");
        }
        inline app::GUIGroup* create() {
            return il2cpp::create_object<app::GUIGroup>(get_class());
        }
        inline app::GUIGroup__Boxed* box(app::GUIGroup value) {
            return il2cpp::box_value<app::GUIGroup__Boxed>(get_class(), value);
        }
    } // namespace GUIGroup
} // namespace app::classes::types
