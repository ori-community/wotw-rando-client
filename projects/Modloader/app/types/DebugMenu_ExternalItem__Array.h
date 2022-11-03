#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DebugMenu_ExternalItem__Array {
        namespace {
            inline app::DebugMenu_ExternalItem__Array__Class* type_info_ref = nullptr;
        }
        inline app::DebugMenu_ExternalItem__Array__Class** type_info = &type_info_ref;
        inline app::DebugMenu_ExternalItem__Array__Class* get_class() {
            return il2cpp::get_class<app::DebugMenu_ExternalItem__Array__Class>(type_info, "", "DebugMenu+ExternalItem[]");
        }
        inline app::DebugMenu_ExternalItem__Array* create() {
            return il2cpp::create_object<app::DebugMenu_ExternalItem__Array>(get_class());
        }
    } // namespace DebugMenu_ExternalItem__Array
} // namespace app::classes::types
