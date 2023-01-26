#pragma once
#include <Modloader/app/structs/Glitch_GlitchingMode__Enum.h>
#include <Modloader/app/structs/Glitch_GlitchingMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Glitch_GlitchingMode__Enum {
        inline app::Glitch_GlitchingMode__Enum__Class** type_info() {
            static app::Glitch_GlitchingMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Glitch_GlitchingMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Glitch_GlitchingMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Glitch_GlitchingMode__Enum__Class>(type_info(), "Colorful", "Glitch", "GlitchingMode");
        }
        inline app::Glitch_GlitchingMode__Enum* create() {
            return il2cpp::create_object<app::Glitch_GlitchingMode__Enum>(get_class());
        }
    } // namespace Glitch_GlitchingMode__Enum
} // namespace app::classes::types
