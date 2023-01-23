#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TweakMode34__Enum__Class.h>
#include <Modloader/app/structs/TweakMode34__Enum.h>

namespace app::classes::types {
    namespace TweakMode34__Enum {
        namespace {
            inline app::TweakMode34__Enum__Class* type_info_ref = nullptr;
        }
        inline app::TweakMode34__Enum__Class** type_info = &type_info_ref;
        inline app::TweakMode34__Enum__Class* get_class() {
            return il2cpp::get_class<app::TweakMode34__Enum__Class>(type_info, "UnityStandardAssets.ImageEffects", "TweakMode34");
        }
        inline app::TweakMode34__Enum* create() {
            return il2cpp::create_object<app::TweakMode34__Enum>(get_class());
        }
    } // namespace TweakMode34__Enum
} // namespace app::classes::types
