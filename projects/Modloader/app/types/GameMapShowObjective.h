#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GameMapShowObjective__Class.h>
#include <Modloader/app/structs/GameMapShowObjective.h>

namespace app::classes::types {
    namespace GameMapShowObjective {
        namespace {
            inline app::GameMapShowObjective__Class* type_info_ref = nullptr;
        }
        inline app::GameMapShowObjective__Class** type_info = &type_info_ref;
        inline app::GameMapShowObjective__Class* get_class() {
            return il2cpp::get_class<app::GameMapShowObjective__Class>(type_info, "", "GameMapShowObjective");
        }
        inline app::GameMapShowObjective* create() {
            return il2cpp::create_object<app::GameMapShowObjective>(get_class());
        }
    } // namespace GameMapShowObjective
} // namespace app::classes::types
