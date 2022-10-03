#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Hashtable_HashtableDebugView {
        namespace {
            app::Hashtable_HashtableDebugView__Class* type_info_ref = nullptr;
        }
        app::Hashtable_HashtableDebugView__Class** type_info = &type_info_ref;
        inline app::Hashtable_HashtableDebugView__Class* get_class() {
            return il2cpp::get_nested_class<app::Hashtable_HashtableDebugView__Class>(type_info, "System.Collections", "Hashtable", "HashtableDebugView");
        }
        inline app::Hashtable_HashtableDebugView* create() {
            return il2cpp::create_object<app::Hashtable_HashtableDebugView>(get_class());
        }
    } // namespace Hashtable_HashtableDebugView
} // namespace app::classes::types
