#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DebugMenuHandler {
        namespace {
            inline app::DebugMenuHandler__Class* type_info_ref = nullptr;
        }
        inline app::DebugMenuHandler__Class** type_info = &type_info_ref;
        inline app::DebugMenuHandler__Class* get_class() {
            return il2cpp::get_class<app::DebugMenuHandler__Class>(type_info, "", "DebugMenuHandler");
        }
        inline app::DebugMenuHandler* create() {
            return il2cpp::create_object<app::DebugMenuHandler>(get_class());
        }
    } // namespace DebugMenuHandler
} // namespace app::classes::types
