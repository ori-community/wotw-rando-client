#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SMAA {
        inline app::SMAA__Class** type_info = (app::SMAA__Class**)(modloader::win::memory::resolve_rva(0x047826B8));
        inline app::SMAA__Class* get_class() {
            return il2cpp::get_class<app::SMAA__Class>(type_info, "UnityStandardAssets.CinematicEffects", "SMAA");
        }
        inline app::SMAA* create() {
            return il2cpp::create_object<app::SMAA>(get_class());
        }
    } // namespace SMAA
} // namespace app::classes::types
