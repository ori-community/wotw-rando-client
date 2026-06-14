#pragma once
#include <Modloader/app/structs/Hashtable_HashtableDebugView.h>
#include <Modloader/app/structs/Hashtable_HashtableDebugView__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Hashtable_HashtableDebugView {
        inline app::Hashtable_HashtableDebugView__Class** type_info() {
            static app::Hashtable_HashtableDebugView__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Hashtable_HashtableDebugView__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Hashtable_HashtableDebugView__Class* get_class() {
            return il2cpp::get_nested_class<app::Hashtable_HashtableDebugView__Class>(type_info(), "System.Collections", "Hashtable", "HashtableDebugView");
        }
        inline app::Hashtable_HashtableDebugView* create() {
            return il2cpp::create_object<app::Hashtable_HashtableDebugView>(get_class());
        }
    } // namespace Hashtable_HashtableDebugView
} // namespace app::classes::types
