#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/HueShiftModifier__Class.h>
#include <Modloader/app/structs/HueShiftModifier.h>

namespace app::classes::types {
    namespace HueShiftModifier {
        namespace {
            inline app::HueShiftModifier__Class* type_info_ref = nullptr;
        }
        inline app::HueShiftModifier__Class** type_info = &type_info_ref;
        inline app::HueShiftModifier__Class* get_class() {
            return il2cpp::get_class<app::HueShiftModifier__Class>(type_info, "", "HueShiftModifier");
        }
        inline app::HueShiftModifier* create() {
            return il2cpp::create_object<app::HueShiftModifier>(get_class());
        }
    } // namespace HueShiftModifier
} // namespace app::classes::types
