#pragma once
#include <Modloader/app/structs/GhostReplayMetaData.h>
#include <Modloader/app/structs/GhostReplayMetaData__Array.h>
#include <Modloader/app/structs/GhostReplayMetaData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GhostReplayMetaData {
        inline app::GhostReplayMetaData__Class** type_info() {
            static app::GhostReplayMetaData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GhostReplayMetaData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GhostReplayMetaData__Class* get_class() {
            return il2cpp::get_class<app::GhostReplayMetaData__Class>(type_info(), "", "GhostReplayMetaData");
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
