#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkMeteringFlags__Enum {
        namespace {
            app::AkMeteringFlags__Enum__Class* type_info_ref = nullptr;
        }
        app::AkMeteringFlags__Enum__Class** type_info = &type_info_ref;
        inline app::AkMeteringFlags__Enum__Class* get_class() {
            return il2cpp::get_class<app::AkMeteringFlags__Enum__Class>(type_info, "", "AkMeteringFlags");
        }
        inline app::AkMeteringFlags__Enum* create() {
            return il2cpp::create_object<app::AkMeteringFlags__Enum>(get_class());
        }
    } // namespace AkMeteringFlags__Enum
} // namespace app::classes::types
