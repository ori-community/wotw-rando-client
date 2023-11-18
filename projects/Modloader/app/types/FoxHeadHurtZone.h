#pragma once
#include <Modloader/app/structs/FoxHeadHurtZone.h>
#include <Modloader/app/structs/FoxHeadHurtZone__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FoxHeadHurtZone {
        inline app::FoxHeadHurtZone__Class** type_info() {
            static app::FoxHeadHurtZone__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FoxHeadHurtZone__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FoxHeadHurtZone__Class* get_class() {
            return il2cpp::get_class<app::FoxHeadHurtZone__Class>(type_info(), "", "FoxHeadHurtZone");
        }
        inline app::FoxHeadHurtZone* create() {
            return il2cpp::create_object<app::FoxHeadHurtZone>(get_class());
        }
    } // namespace FoxHeadHurtZone
} // namespace app::classes::types
