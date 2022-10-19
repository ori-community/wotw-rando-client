#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RaceRequestResultEntry__Array {
        namespace {
            inline app::RaceRequestResultEntry__Array__Class* type_info_ref = nullptr;
        }
        inline app::RaceRequestResultEntry__Array__Class** type_info = &type_info_ref;
        inline app::RaceRequestResultEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::RaceRequestResultEntry__Array__Class>(type_info, "SystemIntegration.Races", "RaceRequestResultEntry[]");
        }
        inline app::RaceRequestResultEntry__Array* create() {
            return il2cpp::create_object<app::RaceRequestResultEntry__Array>(get_class());
        }
    } // namespace RaceRequestResultEntry__Array
} // namespace app::classes::types
