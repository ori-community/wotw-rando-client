#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace NoSoulFlameZone__Array {
        namespace {
            inline app::NoSoulFlameZone__Array__Class* type_info_ref = nullptr;
        }
        inline app::NoSoulFlameZone__Array__Class** type_info = &type_info_ref;
        inline app::NoSoulFlameZone__Array__Class* get_class() {
            return il2cpp::get_class<app::NoSoulFlameZone__Array__Class>(type_info, "", "NoSoulFlameZone[]");
        }
        inline app::NoSoulFlameZone__Array* create() {
            return il2cpp::create_object<app::NoSoulFlameZone__Array>(get_class());
        }
    } // namespace NoSoulFlameZone__Array
} // namespace app::classes::types
