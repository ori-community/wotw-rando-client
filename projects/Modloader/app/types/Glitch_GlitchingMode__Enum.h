#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Glitch_GlitchingMode__Enum {
        namespace {
            inline app::Glitch_GlitchingMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::Glitch_GlitchingMode__Enum__Class** type_info = &type_info_ref;
        inline app::Glitch_GlitchingMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Glitch_GlitchingMode__Enum__Class>(type_info, "Colorful", "Glitch", "GlitchingMode");
        }
        inline app::Glitch_GlitchingMode__Enum* create() {
            return il2cpp::create_object<app::Glitch_GlitchingMode__Enum>(get_class());
        }
    } // namespace Glitch_GlitchingMode__Enum
} // namespace app::classes::types
