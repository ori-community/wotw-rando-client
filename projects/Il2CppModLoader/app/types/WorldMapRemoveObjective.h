#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WorldMapRemoveObjective {
        namespace {
            app::WorldMapRemoveObjective__Class* type_info_ref = nullptr;
        }
        app::WorldMapRemoveObjective__Class** type_info = &type_info_ref;
        inline app::WorldMapRemoveObjective__Class* get_class() {
            return il2cpp::get_class<app::WorldMapRemoveObjective__Class>(type_info, "", "WorldMapRemoveObjective");
        }
        inline app::WorldMapRemoveObjective* create() {
            return il2cpp::create_object<app::WorldMapRemoveObjective>(get_class());
        }
    } // namespace WorldMapRemoveObjective
} // namespace app::classes::types
