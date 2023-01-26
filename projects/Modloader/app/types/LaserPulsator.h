#pragma once
#include <Modloader/app/structs/LaserPulsator.h>
#include <Modloader/app/structs/LaserPulsator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LaserPulsator {
        inline app::LaserPulsator__Class** type_info() {
            static app::LaserPulsator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LaserPulsator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LaserPulsator__Class* get_class() {
            return il2cpp::get_class<app::LaserPulsator__Class>(type_info(), "", "LaserPulsator");
        }
        inline app::LaserPulsator* create() {
            return il2cpp::create_object<app::LaserPulsator>(get_class());
        }
    } // namespace LaserPulsator
} // namespace app::classes::types
