#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonByte {
        namespace {
            app::MoonByte__Class* type_info_ref = nullptr;
        }
        app::MoonByte__Class** type_info = &type_info_ref;
        inline app::MoonByte__Class* get_class() {
            return il2cpp::get_class<app::MoonByte__Class>(type_info, "Moon", "MoonByte");
        }
        inline app::MoonByte* create() {
            return il2cpp::create_object<app::MoonByte>(get_class());
        }
    } // namespace MoonByte
} // namespace app::classes::types
