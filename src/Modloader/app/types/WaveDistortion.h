#pragma once
#include <Modloader/app/structs/WaveDistortion.h>
#include <Modloader/app/structs/WaveDistortion__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WaveDistortion {
        inline app::WaveDistortion__Class** type_info() {
            static app::WaveDistortion__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WaveDistortion__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WaveDistortion__Class* get_class() {
            return il2cpp::get_class<app::WaveDistortion__Class>(type_info(), "Colorful", "WaveDistortion");
        }
        inline app::WaveDistortion* create() {
            return il2cpp::create_object<app::WaveDistortion>(get_class());
        }
    } // namespace WaveDistortion
} // namespace app::classes::types
