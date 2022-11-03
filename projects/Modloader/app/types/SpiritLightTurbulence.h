#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpiritLightTurbulence {
        namespace {
            inline app::SpiritLightTurbulence__Class* type_info_ref = nullptr;
        }
        inline app::SpiritLightTurbulence__Class** type_info = &type_info_ref;
        inline app::SpiritLightTurbulence__Class* get_class() {
            return il2cpp::get_class<app::SpiritLightTurbulence__Class>(type_info, "", "SpiritLightTurbulence");
        }
        inline app::SpiritLightTurbulence* create() {
            return il2cpp::create_object<app::SpiritLightTurbulence>(get_class());
        }
    } // namespace SpiritLightTurbulence
} // namespace app::classes::types
