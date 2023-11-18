#pragma once
#include <Modloader/app/structs/Noise_ColorMode__Enum.h>
#include <Modloader/app/structs/Noise_ColorMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Noise_ColorMode__Enum {
        inline app::Noise_ColorMode__Enum__Class** type_info() {
            static app::Noise_ColorMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Noise_ColorMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Noise_ColorMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Noise_ColorMode__Enum__Class>(type_info(), "Colorful", "Noise", "ColorMode");
        }
        inline app::Noise_ColorMode__Enum* create() {
            return il2cpp::create_object<app::Noise_ColorMode__Enum>(get_class());
        }
    } // namespace Noise_ColorMode__Enum
} // namespace app::classes::types
