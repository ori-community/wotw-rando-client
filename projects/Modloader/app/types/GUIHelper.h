#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GUIHelper {
        inline app::GUIHelper__Class** type_info = (app::GUIHelper__Class**)(modloader::win::memory::resolve_rva(0x0477BC70));
        inline app::GUIHelper__Class* get_class() {
            return il2cpp::get_class<app::GUIHelper__Class>(type_info, "", "GUIHelper");
        }
        inline app::GUIHelper* create() {
            return il2cpp::create_object<app::GUIHelper>(get_class());
        }
    } // namespace GUIHelper
} // namespace app::classes::types
