#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GameSessionRecord {
        namespace {
            app::GameSessionRecord__Class* type_info_ref = nullptr;
        }
        app::GameSessionRecord__Class** type_info = &type_info_ref;
        inline app::GameSessionRecord__Class* get_class() {
            return il2cpp::get_class<app::GameSessionRecord__Class>(type_info, "Moon.Telemetry", "GameSessionRecord");
        }
        inline app::GameSessionRecord* create() {
            return il2cpp::create_object<app::GameSessionRecord>(get_class());
        }
    } // namespace GameSessionRecord
} // namespace app::classes::types
