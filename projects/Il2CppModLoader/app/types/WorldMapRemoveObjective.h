#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace WorldMapRemoveObjective {
        namespace {
            inline app::WorldMapRemoveObjective__Class* type_info_ref = nullptr;
        }
        inline app::WorldMapRemoveObjective__Class** type_info = &type_info_ref;
        inline app::WorldMapRemoveObjective__Class* get_class() {
            return il2cpp::get_class<app::WorldMapRemoveObjective__Class>(type_info, "", "WorldMapRemoveObjective");
        }
        inline app::WorldMapRemoveObjective* create() {
            return il2cpp::create_object<app::WorldMapRemoveObjective>(get_class());
        }
    } // namespace WorldMapRemoveObjective
} // namespace app::classes::types
