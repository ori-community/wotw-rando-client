#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GUISkin_SkinChangedDelegate {
        namespace {
            inline app::GUISkin_SkinChangedDelegate__Class* type_info_ref = nullptr;
        }
        inline app::GUISkin_SkinChangedDelegate__Class** type_info = &type_info_ref;
        inline app::GUISkin_SkinChangedDelegate__Class* get_class() {
            return il2cpp::get_nested_class<app::GUISkin_SkinChangedDelegate__Class>(type_info, "UnityEngine", "GUISkin", "SkinChangedDelegate");
        }
        inline app::GUISkin_SkinChangedDelegate* create() {
            return il2cpp::create_object<app::GUISkin_SkinChangedDelegate>(get_class());
        }
    } // namespace GUISkin_SkinChangedDelegate
} // namespace app::classes::types
