#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GameSession__Array {
        namespace {
            inline app::GameSession__Array__Class* type_info_ref = nullptr;
        }
        inline app::GameSession__Array__Class** type_info = &type_info_ref;
        inline app::GameSession__Array__Class* get_class() {
            return il2cpp::get_class<app::GameSession__Array__Class>(type_info, "Moon.Telemetry", "GameSession[]");
        }
        inline app::GameSession__Array* create() {
            return il2cpp::create_object<app::GameSession__Array>(get_class());
        }
    } // namespace GameSession__Array
} // namespace app::classes::types
