#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GameMapObjectiveIcons {
        namespace {
            inline app::GameMapObjectiveIcons__Class* type_info_ref = nullptr;
        }
        inline app::GameMapObjectiveIcons__Class** type_info = &type_info_ref;
        inline app::GameMapObjectiveIcons__Class* get_class() {
            return il2cpp::get_class<app::GameMapObjectiveIcons__Class>(type_info, "", "GameMapObjectiveIcons");
        }
        inline app::GameMapObjectiveIcons* create() {
            return il2cpp::create_object<app::GameMapObjectiveIcons>(get_class());
        }
    } // namespace GameMapObjectiveIcons
} // namespace app::classes::types
