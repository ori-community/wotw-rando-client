#pragma once
#include <Modloader/app/structs/TweakMode34__Enum.h>
#include <Modloader/app/structs/TweakMode34__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TweakMode34__Enum {
        inline app::TweakMode34__Enum__Class** type_info() {
            static app::TweakMode34__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TweakMode34__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TweakMode34__Enum__Class* get_class() {
            return il2cpp::get_class<app::TweakMode34__Enum__Class>(type_info(), "UnityStandardAssets.ImageEffects", "TweakMode34");
        }
        inline app::TweakMode34__Enum* create() {
            return il2cpp::create_object<app::TweakMode34__Enum>(get_class());
        }
    } // namespace TweakMode34__Enum
} // namespace app::classes::types
