#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ColorUtility {
        namespace {
            inline app::ColorUtility__Class* type_info_ref = nullptr;
        }
        inline app::ColorUtility__Class** type_info = &type_info_ref;
        inline app::ColorUtility__Class* get_class() {
            return il2cpp::get_class<app::ColorUtility__Class>(type_info, "UnityEngine", "ColorUtility");
        }
        inline app::ColorUtility* create() {
            return il2cpp::create_object<app::ColorUtility>(get_class());
        }
    } // namespace ColorUtility
} // namespace app::classes::types
