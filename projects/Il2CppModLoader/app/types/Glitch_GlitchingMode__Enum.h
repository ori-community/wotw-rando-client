#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Glitch_GlitchingMode__Enum {
        namespace {
            app::Glitch_GlitchingMode__Enum__Class* type_info_ref = nullptr;
        }
        app::Glitch_GlitchingMode__Enum__Class** type_info = &type_info_ref;
        inline app::Glitch_GlitchingMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Glitch_GlitchingMode__Enum__Class>(type_info, "Colorful", "Glitch", "GlitchingMode");
        }
        inline app::Glitch_GlitchingMode__Enum* create() {
            return il2cpp::create_object<app::Glitch_GlitchingMode__Enum>(get_class());
        }
    } // namespace Glitch_GlitchingMode__Enum
} // namespace app::classes::types
