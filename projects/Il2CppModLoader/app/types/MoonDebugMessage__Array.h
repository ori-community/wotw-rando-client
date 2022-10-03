#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonDebugMessage__Array {
        namespace {
            app::MoonDebugMessage__Array__Class* type_info_ref = nullptr;
        }
        app::MoonDebugMessage__Array__Class** type_info = &type_info_ref;
        inline app::MoonDebugMessage__Array__Class* get_class() {
            return il2cpp::get_class<app::MoonDebugMessage__Array__Class>(type_info, "Moon", "MoonDebugMessage[]");
        }
        inline app::MoonDebugMessage__Array* create() {
            return il2cpp::create_object<app::MoonDebugMessage__Array>(get_class());
        }
    } // namespace MoonDebugMessage__Array
} // namespace app::classes::types
