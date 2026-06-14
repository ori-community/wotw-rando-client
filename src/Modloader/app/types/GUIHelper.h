#pragma once
#include <Modloader/app/structs/GUIHelper.h>
#include <Modloader/app/structs/GUIHelper__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GUIHelper {
        inline app::GUIHelper__Class** type_info() {
            static app::GUIHelper__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GUIHelper__Class**)(modloader::win::memory::resolve_rva(0x0477BC70));
            }
            return cache;
        }
        inline app::GUIHelper__Class* get_class() {
            return il2cpp::get_class<app::GUIHelper__Class>(type_info(), "", "GUIHelper");
        }
        inline app::GUIHelper* create() {
            return il2cpp::create_object<app::GUIHelper>(get_class());
        }
    } // namespace GUIHelper
} // namespace app::classes::types
