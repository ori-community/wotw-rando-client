#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RaceDebug {
        namespace {
            inline app::RaceDebug__Class* type_info_ref = nullptr;
        }
        inline app::RaceDebug__Class** type_info = &type_info_ref;
        inline app::RaceDebug__Class* get_class() {
            return il2cpp::get_class<app::RaceDebug__Class>(type_info, "", "RaceDebug");
        }
        inline app::RaceDebug* create() {
            return il2cpp::create_object<app::RaceDebug>(get_class());
        }
    } // namespace RaceDebug
} // namespace app::classes::types
