#pragma once
#include <Modloader/app/structs/MatchState__Enum.h>
#include <Modloader/app/structs/MatchState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MatchState__Enum {
        inline app::MatchState__Enum__Class** type_info() {
            static app::MatchState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MatchState__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MatchState__Enum__Class* get_class() {
            return il2cpp::get_class<app::MatchState__Enum__Class>(type_info(), "", "MatchState");
        }
        inline app::MatchState__Enum* create() {
            return il2cpp::create_object<app::MatchState__Enum>(get_class());
        }
    } // namespace MatchState__Enum
} // namespace app::classes::types
