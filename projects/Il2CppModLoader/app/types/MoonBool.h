#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonBool {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoonBool__Class** type_info;
        inline app::MoonBool__Class* get_class() {
            return il2cpp::get_class<app::MoonBool__Class>(type_info, "Moon", "MoonBool");
        }
        inline app::MoonBool* create() {
            return il2cpp::create_object<app::MoonBool>(get_class());
        }
    } // namespace MoonBool
} // namespace app::classes::types
