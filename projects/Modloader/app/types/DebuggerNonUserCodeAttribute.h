#pragma once
#include <Modloader/app/structs/DebuggerNonUserCodeAttribute.h>
#include <Modloader/app/structs/DebuggerNonUserCodeAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DebuggerNonUserCodeAttribute {
        inline app::DebuggerNonUserCodeAttribute__Class** type_info() {
            static app::DebuggerNonUserCodeAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DebuggerNonUserCodeAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DebuggerNonUserCodeAttribute__Class* get_class() {
            return il2cpp::get_class<app::DebuggerNonUserCodeAttribute__Class>(type_info(), "System.Diagnostics", "DebuggerNonUserCodeAttribute");
        }
        inline app::DebuggerNonUserCodeAttribute* create() {
            return il2cpp::create_object<app::DebuggerNonUserCodeAttribute>(get_class());
        }
    } // namespace DebuggerNonUserCodeAttribute
} // namespace app::classes::types
