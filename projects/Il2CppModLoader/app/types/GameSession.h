#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GameSession {
        namespace {
            app::GameSession__Class* type_info_ref = nullptr;
        }
        app::GameSession__Class** type_info = &type_info_ref;
        inline app::GameSession__Class* get_class() {
            return il2cpp::get_class<app::GameSession__Class>(type_info, "Moon.Telemetry", "GameSession");
        }
        inline app::GameSession* create() {
            return il2cpp::create_object<app::GameSession>(get_class());
        }
        inline app::GameSession__Array* create_array(int size) {
            return il2cpp::array_new<app::GameSession__Array>(get_class(), size);
        }
        inline app::GameSession__Array* create_array(const std::vector<app::GameSession*>& items) {
            return il2cpp::array_new<app::GameSession__Array>(get_class(), items);
        }
    } // namespace GameSession
} // namespace app::classes::types
