#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Screen {
        namespace {
            inline app::Screen__Class* type_info_ref = nullptr;
        }
        inline app::Screen__Class** type_info = &type_info_ref;
        inline app::Screen__Class* get_class() {
            return il2cpp::get_class<app::Screen__Class>(type_info, "UnityEngine", "Screen");
        }
        inline app::Screen* create() {
            return il2cpp::create_object<app::Screen>(get_class());
        }
    } // namespace Screen
} // namespace app::classes::types
