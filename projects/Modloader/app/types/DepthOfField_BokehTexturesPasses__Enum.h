#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DepthOfField_BokehTexturesPasses__Enum {
        namespace {
            inline app::DepthOfField_BokehTexturesPasses__Enum__Class* type_info_ref = nullptr;
        }
        inline app::DepthOfField_BokehTexturesPasses__Enum__Class** type_info = &type_info_ref;
        inline app::DepthOfField_BokehTexturesPasses__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::DepthOfField_BokehTexturesPasses__Enum__Class>(type_info, "UnityStandardAssets.CinematicEffects", "DepthOfField", "BokehTexturesPasses");
        }
        inline app::DepthOfField_BokehTexturesPasses__Enum* create() {
            return il2cpp::create_object<app::DepthOfField_BokehTexturesPasses__Enum>(get_class());
        }
    } // namespace DepthOfField_BokehTexturesPasses__Enum
} // namespace app::classes::types
