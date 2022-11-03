#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace WorldMapCompleteObjective {
        namespace {
            inline app::WorldMapCompleteObjective__Class* type_info_ref = nullptr;
        }
        inline app::WorldMapCompleteObjective__Class** type_info = &type_info_ref;
        inline app::WorldMapCompleteObjective__Class* get_class() {
            return il2cpp::get_class<app::WorldMapCompleteObjective__Class>(type_info, "", "WorldMapCompleteObjective");
        }
        inline app::WorldMapCompleteObjective* create() {
            return il2cpp::create_object<app::WorldMapCompleteObjective>(get_class());
        }
    } // namespace WorldMapCompleteObjective
} // namespace app::classes::types
