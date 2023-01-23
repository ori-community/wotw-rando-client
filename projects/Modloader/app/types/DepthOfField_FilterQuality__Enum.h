#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DepthOfField_FilterQuality__Enum__Class.h>
#include <Modloader/app/structs/DepthOfField_FilterQuality__Enum.h>

namespace app::classes::types {
    namespace DepthOfField_FilterQuality__Enum {
        namespace {
            inline app::DepthOfField_FilterQuality__Enum__Class* type_info_ref = nullptr;
        }
        inline app::DepthOfField_FilterQuality__Enum__Class** type_info = &type_info_ref;
        inline app::DepthOfField_FilterQuality__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::DepthOfField_FilterQuality__Enum__Class>(type_info, "UnityStandardAssets.CinematicEffects", "DepthOfField", "FilterQuality");
        }
        inline app::DepthOfField_FilterQuality__Enum* create() {
            return il2cpp::create_object<app::DepthOfField_FilterQuality__Enum>(get_class());
        }
    } // namespace DepthOfField_FilterQuality__Enum
} // namespace app::classes::types
