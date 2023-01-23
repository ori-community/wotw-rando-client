#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DebuggerHiddenAttribute__Class.h>
#include <Modloader/app/structs/DebuggerHiddenAttribute.h>

namespace app::classes::types {
    namespace DebuggerHiddenAttribute {
        namespace {
            inline app::DebuggerHiddenAttribute__Class* type_info_ref = nullptr;
        }
        inline app::DebuggerHiddenAttribute__Class** type_info = &type_info_ref;
        inline app::DebuggerHiddenAttribute__Class* get_class() {
            return il2cpp::get_class<app::DebuggerHiddenAttribute__Class>(type_info, "System.Diagnostics", "DebuggerHiddenAttribute");
        }
        inline app::DebuggerHiddenAttribute* create() {
            return il2cpp::create_object<app::DebuggerHiddenAttribute>(get_class());
        }
    } // namespace DebuggerHiddenAttribute
} // namespace app::classes::types
