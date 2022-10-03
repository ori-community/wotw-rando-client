#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinRefillOnEvent {
        namespace {
            app::SeinRefillOnEvent__Class* type_info_ref = nullptr;
        }
        app::SeinRefillOnEvent__Class** type_info = &type_info_ref;
        inline app::SeinRefillOnEvent__Class* get_class() {
            return il2cpp::get_class<app::SeinRefillOnEvent__Class>(type_info, "", "SeinRefillOnEvent");
        }
        inline app::SeinRefillOnEvent* create() {
            return il2cpp::create_object<app::SeinRefillOnEvent>(get_class());
        }
    } // namespace SeinRefillOnEvent
} // namespace app::classes::types
