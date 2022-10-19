#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SmoothLinesPlugin {
        namespace {
            inline app::SmoothLinesPlugin__Class* type_info_ref = nullptr;
        }
        inline app::SmoothLinesPlugin__Class** type_info = &type_info_ref;
        inline app::SmoothLinesPlugin__Class* get_class() {
            return il2cpp::get_class<app::SmoothLinesPlugin__Class>(type_info, "", "SmoothLinesPlugin");
        }
        inline app::SmoothLinesPlugin* create() {
            return il2cpp::create_object<app::SmoothLinesPlugin>(get_class());
        }
    } // namespace SmoothLinesPlugin
} // namespace app::classes::types
