#pragma once
#include <Modloader/app/structs/FPSCounter.h>
#include <Modloader/app/structs/FPSCounter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FPSCounter {
        inline app::FPSCounter__Class** type_info() {
            static app::FPSCounter__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FPSCounter__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FPSCounter__Class* get_class() {
            return il2cpp::get_class<app::FPSCounter__Class>(type_info(), "", "FPSCounter");
        }
        inline app::FPSCounter* create() {
            return il2cpp::create_object<app::FPSCounter>(get_class());
        }
    } // namespace FPSCounter
} // namespace app::classes::types
