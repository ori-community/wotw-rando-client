#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ExpandoObject_KeyCollectionDebugView {
        namespace {
            inline app::ExpandoObject_KeyCollectionDebugView__Class* type_info_ref = nullptr;
        }
        inline app::ExpandoObject_KeyCollectionDebugView__Class** type_info = &type_info_ref;
        inline app::ExpandoObject_KeyCollectionDebugView__Class* get_class() {
            return il2cpp::get_nested_class<app::ExpandoObject_KeyCollectionDebugView__Class>(type_info, "System.Dynamic", "ExpandoObject", "KeyCollectionDebugView");
        }
        inline app::ExpandoObject_KeyCollectionDebugView* create() {
            return il2cpp::create_object<app::ExpandoObject_KeyCollectionDebugView>(get_class());
        }
    } // namespace ExpandoObject_KeyCollectionDebugView
} // namespace app::classes::types
