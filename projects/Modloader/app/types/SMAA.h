#pragma once
#include <Modloader/app/structs/SMAA.h>
#include <Modloader/app/structs/SMAA__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SMAA {
        inline app::SMAA__Class** type_info() {
            static app::SMAA__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SMAA__Class**)(modloader::win::memory::resolve_rva(0x047826B8));
            }
            return cache;
        }
        inline app::SMAA__Class* get_class() {
            return il2cpp::get_class<app::SMAA__Class>(type_info(), "UnityStandardAssets.CinematicEffects", "SMAA");
        }
        inline app::SMAA* create() {
            return il2cpp::create_object<app::SMAA>(get_class());
        }
    } // namespace SMAA
} // namespace app::classes::types
