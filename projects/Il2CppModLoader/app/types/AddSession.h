#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AddSession {
        namespace {
            inline app::AddSession__Class* type_info_ref = nullptr;
        }
        inline app::AddSession__Class** type_info = &type_info_ref;
        inline app::AddSession__Class* get_class() {
            return il2cpp::get_class<app::AddSession__Class>(type_info, "Moon.Telemetry", "AddSession");
        }
        inline app::AddSession* create() {
            return il2cpp::create_object<app::AddSession>(get_class());
        }
    } // namespace AddSession
} // namespace app::classes::types
