#pragma once
#include <Modloader/app/structs/ArrayList_ArrayListDebugView.h>
#include <Modloader/app/structs/ArrayList_ArrayListDebugView__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ArrayList_ArrayListDebugView {
        inline app::ArrayList_ArrayListDebugView__Class** type_info() {
            static app::ArrayList_ArrayListDebugView__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ArrayList_ArrayListDebugView__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ArrayList_ArrayListDebugView__Class* get_class() {
            return il2cpp::get_nested_class<app::ArrayList_ArrayListDebugView__Class>(type_info(), "System.Collections", "ArrayList", "ArrayListDebugView");
        }
        inline app::ArrayList_ArrayListDebugView* create() {
            return il2cpp::create_object<app::ArrayList_ArrayListDebugView>(get_class());
        }
    } // namespace ArrayList_ArrayListDebugView
} // namespace app::classes::types
