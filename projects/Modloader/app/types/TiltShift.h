#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TiltShift__Class.h>
#include <Modloader/app/structs/TiltShift.h>

namespace app::classes::types {
    namespace TiltShift {
        namespace {
            inline app::TiltShift__Class* type_info_ref = nullptr;
        }
        inline app::TiltShift__Class** type_info = &type_info_ref;
        inline app::TiltShift__Class* get_class() {
            return il2cpp::get_class<app::TiltShift__Class>(type_info, "UnityStandardAssets.ImageEffects", "TiltShift");
        }
        inline app::TiltShift* create() {
            return il2cpp::create_object<app::TiltShift>(get_class());
        }
    } // namespace TiltShift
} // namespace app::classes::types
