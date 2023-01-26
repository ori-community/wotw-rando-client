#pragma once
#include <Modloader/app/structs/RaceLeaderBoard__Array.h>
#include <Modloader/app/structs/RaceLeaderBoard__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RaceLeaderBoard__Array {
        inline app::RaceLeaderBoard__Array__Class** type_info() {
            static app::RaceLeaderBoard__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RaceLeaderBoard__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RaceLeaderBoard__Array__Class* get_class() {
            return il2cpp::get_class<app::RaceLeaderBoard__Array__Class>(type_info(), "Moon.Race", "RaceLeaderBoard[]");
        }
        inline app::RaceLeaderBoard__Array* create() {
            return il2cpp::create_object<app::RaceLeaderBoard__Array>(get_class());
        }
    } // namespace RaceLeaderBoard__Array
} // namespace app::classes::types
