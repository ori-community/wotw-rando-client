#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RaceEntry__Array {
        namespace {
            app::RaceEntry__Array__Class* type_info_ref = nullptr;
        }
        app::RaceEntry__Array__Class** type_info = &type_info_ref;
        inline app::RaceEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::RaceEntry__Array__Class>(type_info, "SystemIntegration.Races", "RaceEntry[]");
        }
        inline app::RaceEntry__Array* create() {
            return il2cpp::create_object<app::RaceEntry__Array>(get_class());
        }
    } // namespace RaceEntry__Array
} // namespace app::classes::types
