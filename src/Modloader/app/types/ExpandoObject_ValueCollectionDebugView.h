#pragma once
#include <Modloader/app/structs/ExpandoObject_ValueCollectionDebugView.h>
#include <Modloader/app/structs/ExpandoObject_ValueCollectionDebugView__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ExpandoObject_ValueCollectionDebugView {
        inline app::ExpandoObject_ValueCollectionDebugView__Class** type_info() {
            static app::ExpandoObject_ValueCollectionDebugView__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ExpandoObject_ValueCollectionDebugView__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ExpandoObject_ValueCollectionDebugView__Class* get_class() {
            return il2cpp::get_nested_class<app::ExpandoObject_ValueCollectionDebugView__Class>(type_info(), "System.Dynamic", "ExpandoObject", "ValueCollectionDebugView");
        }
        inline app::ExpandoObject_ValueCollectionDebugView* create() {
            return il2cpp::create_object<app::ExpandoObject_ValueCollectionDebugView>(get_class());
        }
    } // namespace ExpandoObject_ValueCollectionDebugView
} // namespace app::classes::types
