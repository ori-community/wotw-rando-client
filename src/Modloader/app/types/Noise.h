#pragma once
#include <Modloader/app/structs/Noise.h>
#include <Modloader/app/structs/Noise__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Noise {
        inline app::Noise__Class** type_info() {
            static app::Noise__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Noise__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Noise__Class* get_class() {
            return il2cpp::get_class<app::Noise__Class>(type_info(), "Colorful", "Noise");
        }
        inline app::Noise* create() {
            return il2cpp::create_object<app::Noise>(get_class());
        }
    } // namespace Noise
} // namespace app::classes::types
