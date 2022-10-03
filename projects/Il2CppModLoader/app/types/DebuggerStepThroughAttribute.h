#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DebuggerStepThroughAttribute {
        namespace {
            app::DebuggerStepThroughAttribute__Class* type_info_ref = nullptr;
        }
        app::DebuggerStepThroughAttribute__Class** type_info = &type_info_ref;
        inline app::DebuggerStepThroughAttribute__Class* get_class() {
            return il2cpp::get_class<app::DebuggerStepThroughAttribute__Class>(type_info, "System.Diagnostics", "DebuggerStepThroughAttribute");
        }
        inline app::DebuggerStepThroughAttribute* create() {
            return il2cpp::create_object<app::DebuggerStepThroughAttribute>(get_class());
        }
    } // namespace DebuggerStepThroughAttribute
} // namespace app::classes::types
