#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LoadDebugMenuPage {
        inline app::LoadDebugMenuPage__Class** type_info = (app::LoadDebugMenuPage__Class**)(modloader::win::memory::resolve_rva(0x04774B70));
        inline app::LoadDebugMenuPage__Class* get_class() {
            return il2cpp::get_class<app::LoadDebugMenuPage__Class>(type_info, "", "LoadDebugMenuPage");
        }
        inline app::LoadDebugMenuPage* create() {
            return il2cpp::create_object<app::LoadDebugMenuPage>(get_class());
        }
    } // namespace LoadDebugMenuPage
} // namespace app::classes::types
