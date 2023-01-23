#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LensAberrations_Pass__Enum__Class.h>
#include <Modloader/app/structs/LensAberrations_Pass__Enum.h>

namespace app::classes::types {
    namespace LensAberrations_Pass__Enum {
        namespace {
            inline app::LensAberrations_Pass__Enum__Class* type_info_ref = nullptr;
        }
        inline app::LensAberrations_Pass__Enum__Class** type_info = &type_info_ref;
        inline app::LensAberrations_Pass__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::LensAberrations_Pass__Enum__Class>(type_info, "UnityStandardAssets.CinematicEffects", "LensAberrations", "Pass");
        }
        inline app::LensAberrations_Pass__Enum* create() {
            return il2cpp::create_object<app::LensAberrations_Pass__Enum>(get_class());
        }
    } // namespace LensAberrations_Pass__Enum
} // namespace app::classes::types
