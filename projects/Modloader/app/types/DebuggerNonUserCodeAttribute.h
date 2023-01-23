#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DebuggerNonUserCodeAttribute__Class.h>
#include <Modloader/app/structs/DebuggerNonUserCodeAttribute.h>

namespace app::classes::types {
    namespace DebuggerNonUserCodeAttribute {
        namespace {
            inline app::DebuggerNonUserCodeAttribute__Class* type_info_ref = nullptr;
        }
        inline app::DebuggerNonUserCodeAttribute__Class** type_info = &type_info_ref;
        inline app::DebuggerNonUserCodeAttribute__Class* get_class() {
            return il2cpp::get_class<app::DebuggerNonUserCodeAttribute__Class>(type_info, "System.Diagnostics", "DebuggerNonUserCodeAttribute");
        }
        inline app::DebuggerNonUserCodeAttribute* create() {
            return il2cpp::create_object<app::DebuggerNonUserCodeAttribute>(get_class());
        }
    } // namespace DebuggerNonUserCodeAttribute
} // namespace app::classes::types
