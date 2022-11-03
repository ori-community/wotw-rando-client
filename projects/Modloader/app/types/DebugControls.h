#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DebugControls {
        namespace {
            inline app::DebugControls__Class* type_info_ref = nullptr;
        }
        inline app::DebugControls__Class** type_info = &type_info_ref;
        inline app::DebugControls__Class* get_class() {
            return il2cpp::get_class<app::DebugControls__Class>(type_info, "", "DebugControls");
        }
        inline app::DebugControls* create() {
            return il2cpp::create_object<app::DebugControls>(get_class());
        }
    } // namespace DebugControls
} // namespace app::classes::types
