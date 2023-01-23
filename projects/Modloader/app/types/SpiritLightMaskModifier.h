#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SpiritLightMaskModifier__Class.h>
#include <Modloader/app/structs/SpiritLightMaskModifier.h>

namespace app::classes::types {
    namespace SpiritLightMaskModifier {
        namespace {
            inline app::SpiritLightMaskModifier__Class* type_info_ref = nullptr;
        }
        inline app::SpiritLightMaskModifier__Class** type_info = &type_info_ref;
        inline app::SpiritLightMaskModifier__Class* get_class() {
            return il2cpp::get_class<app::SpiritLightMaskModifier__Class>(type_info, "", "SpiritLightMaskModifier");
        }
        inline app::SpiritLightMaskModifier* create() {
            return il2cpp::create_object<app::SpiritLightMaskModifier>(get_class());
        }
    } // namespace SpiritLightMaskModifier
} // namespace app::classes::types
