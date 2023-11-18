#pragma once
#include <Modloader/app/structs/FoxTailHurtZone.h>
#include <Modloader/app/structs/FoxTailHurtZone__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FoxTailHurtZone {
        inline app::FoxTailHurtZone__Class** type_info() {
            static app::FoxTailHurtZone__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FoxTailHurtZone__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FoxTailHurtZone__Class* get_class() {
            return il2cpp::get_class<app::FoxTailHurtZone__Class>(type_info(), "", "FoxTailHurtZone");
        }
        inline app::FoxTailHurtZone* create() {
            return il2cpp::create_object<app::FoxTailHurtZone>(get_class());
        }
    } // namespace FoxTailHurtZone
} // namespace app::classes::types
