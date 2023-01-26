#pragma once
#include <Modloader/app/structs/ExecuteAlways.h>
#include <Modloader/app/structs/ExecuteAlways__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ExecuteAlways {
        inline app::ExecuteAlways__Class** type_info() {
            static app::ExecuteAlways__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ExecuteAlways__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ExecuteAlways__Class* get_class() {
            return il2cpp::get_class<app::ExecuteAlways__Class>(type_info(), "UnityEngine", "ExecuteAlways");
        }
        inline app::ExecuteAlways* create() {
            return il2cpp::create_object<app::ExecuteAlways>(get_class());
        }
    } // namespace ExecuteAlways
} // namespace app::classes::types
