#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DebugHub {
        inline app::DebugHub__Class** type_info = (app::DebugHub__Class**)(modloader::win::memory::resolve_rva(0x04763D20));
        inline app::DebugHub__Class* get_class() {
            return il2cpp::get_class<app::DebugHub__Class>(type_info, "", "DebugHub");
        }
        inline app::DebugHub* create() {
            return il2cpp::create_object<app::DebugHub>(get_class());
        }
    } // namespace DebugHub
} // namespace app::classes::types
