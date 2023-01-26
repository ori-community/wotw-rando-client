#pragma once
#include <Modloader/app/structs/ExpandoObject_KeyCollectionDebugView.h>
#include <Modloader/app/structs/ExpandoObject_KeyCollectionDebugView__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ExpandoObject_KeyCollectionDebugView {
        inline app::ExpandoObject_KeyCollectionDebugView__Class** type_info() {
            static app::ExpandoObject_KeyCollectionDebugView__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ExpandoObject_KeyCollectionDebugView__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ExpandoObject_KeyCollectionDebugView__Class* get_class() {
            return il2cpp::get_nested_class<app::ExpandoObject_KeyCollectionDebugView__Class>(type_info(), "System.Dynamic", "ExpandoObject", "KeyCollectionDebugView");
        }
        inline app::ExpandoObject_KeyCollectionDebugView* create() {
            return il2cpp::create_object<app::ExpandoObject_KeyCollectionDebugView>(get_class());
        }
    } // namespace ExpandoObject_KeyCollectionDebugView
} // namespace app::classes::types
