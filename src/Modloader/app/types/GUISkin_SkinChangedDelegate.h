#pragma once
#include <Modloader/app/structs/GUISkin_SkinChangedDelegate.h>
#include <Modloader/app/structs/GUISkin_SkinChangedDelegate__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GUISkin_SkinChangedDelegate {
        inline app::GUISkin_SkinChangedDelegate__Class** type_info() {
            static app::GUISkin_SkinChangedDelegate__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GUISkin_SkinChangedDelegate__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GUISkin_SkinChangedDelegate__Class* get_class() {
            return il2cpp::get_nested_class<app::GUISkin_SkinChangedDelegate__Class>(type_info(), "UnityEngine", "GUISkin", "SkinChangedDelegate");
        }
        inline app::GUISkin_SkinChangedDelegate* create() {
            return il2cpp::create_object<app::GUISkin_SkinChangedDelegate>(get_class());
        }
    } // namespace GUISkin_SkinChangedDelegate
} // namespace app::classes::types
