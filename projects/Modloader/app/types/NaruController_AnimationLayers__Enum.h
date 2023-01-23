#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/NaruController_AnimationLayers__Enum__Class.h>
#include <Modloader/app/structs/NaruController_AnimationLayers__Enum.h>

namespace app::classes::types {
    namespace NaruController_AnimationLayers__Enum {
        namespace {
            inline app::NaruController_AnimationLayers__Enum__Class* type_info_ref = nullptr;
        }
        inline app::NaruController_AnimationLayers__Enum__Class** type_info = &type_info_ref;
        inline app::NaruController_AnimationLayers__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::NaruController_AnimationLayers__Enum__Class>(type_info, "", "NaruController", "AnimationLayers");
        }
        inline app::NaruController_AnimationLayers__Enum* create() {
            return il2cpp::create_object<app::NaruController_AnimationLayers__Enum>(get_class());
        }
    } // namespace NaruController_AnimationLayers__Enum
} // namespace app::classes::types
