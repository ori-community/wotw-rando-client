#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkDiffractionFlags__Enum {
        namespace {
            app::AkDiffractionFlags__Enum__Class* type_info_ref = nullptr;
        }
        app::AkDiffractionFlags__Enum__Class** type_info = &type_info_ref;
        inline app::AkDiffractionFlags__Enum__Class* get_class() {
            return il2cpp::get_class<app::AkDiffractionFlags__Enum__Class>(type_info, "", "AkDiffractionFlags");
        }
        inline app::AkDiffractionFlags__Enum* create() {
            return il2cpp::create_object<app::AkDiffractionFlags__Enum>(get_class());
        }
    } // namespace AkDiffractionFlags__Enum
} // namespace app::classes::types
