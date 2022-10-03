#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonColor32 {
        namespace {
            app::MoonColor32__Class* type_info_ref = nullptr;
        }
        app::MoonColor32__Class** type_info = &type_info_ref;
        inline app::MoonColor32__Class* get_class() {
            return il2cpp::get_class<app::MoonColor32__Class>(type_info, "Moon", "MoonColor32");
        }
        inline app::MoonColor32* create() {
            return il2cpp::create_object<app::MoonColor32>(get_class());
        }
    } // namespace MoonColor32
} // namespace app::classes::types
