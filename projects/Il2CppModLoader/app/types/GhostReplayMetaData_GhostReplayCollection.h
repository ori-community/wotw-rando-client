#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GhostReplayMetaData_GhostReplayCollection {
        namespace {
            inline app::GhostReplayMetaData_GhostReplayCollection__Class* type_info_ref = nullptr;
        }
        inline app::GhostReplayMetaData_GhostReplayCollection__Class** type_info = &type_info_ref;
        inline app::GhostReplayMetaData_GhostReplayCollection__Class* get_class() {
            return il2cpp::get_nested_class<app::GhostReplayMetaData_GhostReplayCollection__Class>(type_info, "", "GhostReplayMetaData", "GhostReplayCollection");
        }
        inline app::GhostReplayMetaData_GhostReplayCollection* create() {
            return il2cpp::create_object<app::GhostReplayMetaData_GhostReplayCollection>(get_class());
        }
    } // namespace GhostReplayMetaData_GhostReplayCollection
} // namespace app::classes::types
