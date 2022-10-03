#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FlagsAttribute {
        namespace {
            app::FlagsAttribute__Class* type_info_ref = nullptr;
        }
        app::FlagsAttribute__Class** type_info = &type_info_ref;
        inline app::FlagsAttribute__Class* get_class() {
            return il2cpp::get_class<app::FlagsAttribute__Class>(type_info, "System", "FlagsAttribute");
        }
        inline app::FlagsAttribute* create() {
            return il2cpp::create_object<app::FlagsAttribute>(get_class());
        }
    } // namespace FlagsAttribute
} // namespace app::classes::types
