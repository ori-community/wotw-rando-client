#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RaceLeaderBoard__Array {
        namespace {
            app::RaceLeaderBoard__Array__Class* type_info_ref = nullptr;
        }
        app::RaceLeaderBoard__Array__Class** type_info = &type_info_ref;
        inline app::RaceLeaderBoard__Array__Class* get_class() {
            return il2cpp::get_class<app::RaceLeaderBoard__Array__Class>(type_info, "Moon.Race", "RaceLeaderBoard[]");
        }
        inline app::RaceLeaderBoard__Array* create() {
            return il2cpp::create_object<app::RaceLeaderBoard__Array>(get_class());
        }
    } // namespace RaceLeaderBoard__Array
} // namespace app::classes::types
