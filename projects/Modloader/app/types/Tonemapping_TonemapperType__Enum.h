#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Tonemapping_TonemapperType__Enum__Class.h>
#include <Modloader/app/structs/Tonemapping_TonemapperType__Enum.h>

namespace app::classes::types {
    namespace Tonemapping_TonemapperType__Enum {
        namespace {
            inline app::Tonemapping_TonemapperType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::Tonemapping_TonemapperType__Enum__Class** type_info = &type_info_ref;
        inline app::Tonemapping_TonemapperType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Tonemapping_TonemapperType__Enum__Class>(type_info, "UnityStandardAssets.ImageEffects", "Tonemapping", "TonemapperType");
        }
        inline app::Tonemapping_TonemapperType__Enum* create() {
            return il2cpp::create_object<app::Tonemapping_TonemapperType__Enum>(get_class());
        }
    } // namespace Tonemapping_TonemapperType__Enum
} // namespace app::classes::types
