#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GhostReplayMetaData {
        namespace {
            inline app::GhostReplayMetaData__Class* type_info_ref = nullptr;
        }
        inline app::GhostReplayMetaData__Class** type_info = &type_info_ref;
        inline app::GhostReplayMetaData__Class* get_class() {
            return il2cpp::get_class<app::GhostReplayMetaData__Class>(type_info, "", "GhostReplayMetaData");
        }
        inline app::GhostReplayMetaData* create() {
            return il2cpp::create_object<app::GhostReplayMetaData>(get_class());
        }
        inline app::GhostReplayMetaData__Array* create_array(int size) {
            return il2cpp::array_new<app::GhostReplayMetaData__Array>(get_class(), size);
        }
        inline app::GhostReplayMetaData__Array* create_array(const std::vector<app::GhostReplayMetaData*>& items) {
            return il2cpp::array_new<app::GhostReplayMetaData__Array>(get_class(), items);
        }
    } // namespace GhostReplayMetaData
} // namespace app::classes::types
