#pragma once
#include <Modloader/app/structs/HDRBloomMode__Enum.h>
#include <Modloader/app/structs/HDRBloomMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HDRBloomMode__Enum {
        inline app::HDRBloomMode__Enum__Class** type_info() {
            static app::HDRBloomMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HDRBloomMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HDRBloomMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::HDRBloomMode__Enum__Class>(type_info(), "UnityStandardAssets.ImageEffects", "HDRBloomMode");
        }
        inline app::HDRBloomMode__Enum* create() {
            return il2cpp::create_object<app::HDRBloomMode__Enum>(get_class());
        }
    } // namespace HDRBloomMode__Enum
} // namespace app::classes::types
