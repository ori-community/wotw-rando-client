#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DecompressionMethods__Enum {
        namespace {
            app::DecompressionMethods__Enum__Class* type_info_ref = nullptr;
        }
        app::DecompressionMethods__Enum__Class** type_info = &type_info_ref;
        inline app::DecompressionMethods__Enum__Class* get_class() {
            return il2cpp::get_class<app::DecompressionMethods__Enum__Class>(type_info, "System.Net", "DecompressionMethods");
        }
        inline app::DecompressionMethods__Enum* create() {
            return il2cpp::create_object<app::DecompressionMethods__Enum>(get_class());
        }
    } // namespace DecompressionMethods__Enum
} // namespace app::classes::types
