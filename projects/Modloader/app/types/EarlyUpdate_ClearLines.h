#pragma once
#include <Modloader/app/structs/EarlyUpdate_ClearLines.h>
#include <Modloader/app/structs/EarlyUpdate_ClearLines__Boxed.h>
#include <Modloader/app/structs/EarlyUpdate_ClearLines__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EarlyUpdate_ClearLines {
        inline app::EarlyUpdate_ClearLines__Class** type_info() {
            static app::EarlyUpdate_ClearLines__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EarlyUpdate_ClearLines__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EarlyUpdate_ClearLines__Class* get_class() {
            return il2cpp::get_nested_class<app::EarlyUpdate_ClearLines__Class>(type_info(), "UnityEngine.Experimental.PlayerLoop", "EarlyUpdate", "ClearLines");
        }
        inline app::EarlyUpdate_ClearLines* create() {
            return il2cpp::create_object<app::EarlyUpdate_ClearLines>(get_class());
        }
        inline app::EarlyUpdate_ClearLines__Boxed* box(app::EarlyUpdate_ClearLines value) {
            return il2cpp::box_value<app::EarlyUpdate_ClearLines__Boxed>(get_class(), value);
        }
    } // namespace EarlyUpdate_ClearLines
} // namespace app::classes::types
