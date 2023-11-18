#pragma once
#include <Modloader/app/structs/DebuggerStepThroughAttribute.h>
#include <Modloader/app/structs/DebuggerStepThroughAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DebuggerStepThroughAttribute {
        inline app::DebuggerStepThroughAttribute__Class** type_info() {
            static app::DebuggerStepThroughAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DebuggerStepThroughAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DebuggerStepThroughAttribute__Class* get_class() {
            return il2cpp::get_class<app::DebuggerStepThroughAttribute__Class>(type_info(), "System.Diagnostics", "DebuggerStepThroughAttribute");
        }
        inline app::DebuggerStepThroughAttribute* create() {
            return il2cpp::create_object<app::DebuggerStepThroughAttribute>(get_class());
        }
    } // namespace DebuggerStepThroughAttribute
} // namespace app::classes::types
