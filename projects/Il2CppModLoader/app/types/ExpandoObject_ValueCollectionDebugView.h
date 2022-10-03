#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ExpandoObject_ValueCollectionDebugView {
        namespace {
            app::ExpandoObject_ValueCollectionDebugView__Class* type_info_ref = nullptr;
        }
        app::ExpandoObject_ValueCollectionDebugView__Class** type_info = &type_info_ref;
        inline app::ExpandoObject_ValueCollectionDebugView__Class* get_class() {
            return il2cpp::get_nested_class<app::ExpandoObject_ValueCollectionDebugView__Class>(type_info, "System.Dynamic", "ExpandoObject", "ValueCollectionDebugView");
        }
        inline app::ExpandoObject_ValueCollectionDebugView* create() {
            return il2cpp::create_object<app::ExpandoObject_ValueCollectionDebugView>(get_class());
        }
    } // namespace ExpandoObject_ValueCollectionDebugView
} // namespace app::classes::types
