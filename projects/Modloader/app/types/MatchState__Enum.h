#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MatchState__Enum {
        namespace {
            inline app::MatchState__Enum__Class* type_info_ref = nullptr;
        }
        inline app::MatchState__Enum__Class** type_info = &type_info_ref;
        inline app::MatchState__Enum__Class* get_class() {
            return il2cpp::get_class<app::MatchState__Enum__Class>(type_info, "", "MatchState");
        }
        inline app::MatchState__Enum* create() {
            return il2cpp::create_object<app::MatchState__Enum>(get_class());
        }
    } // namespace MatchState__Enum
} // namespace app::classes::types
