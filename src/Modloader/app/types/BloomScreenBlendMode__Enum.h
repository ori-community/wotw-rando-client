#pragma once
#include <Modloader/app/structs/BloomScreenBlendMode__Enum.h>
#include <Modloader/app/structs/BloomScreenBlendMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BloomScreenBlendMode__Enum {
        inline app::BloomScreenBlendMode__Enum__Class** type_info() {
            static app::BloomScreenBlendMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BloomScreenBlendMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BloomScreenBlendMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::BloomScreenBlendMode__Enum__Class>(type_info(), "UnityStandardAssets.ImageEffects", "BloomScreenBlendMode");
        }
        inline app::BloomScreenBlendMode__Enum* create() {
            return il2cpp::create_object<app::BloomScreenBlendMode__Enum>(get_class());
        }
    } // namespace BloomScreenBlendMode__Enum
} // namespace app::classes::types
