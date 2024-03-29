#pragma once
#include <Modloader/app/structs/GhostRecordingMetaDataData.h>
#include <Modloader/app/structs/GhostRecordingMetaDataData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GhostRecordingMetaDataData {
        inline app::GhostRecordingMetaDataData__Class** type_info() {
            static app::GhostRecordingMetaDataData__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GhostRecordingMetaDataData__Class**)(modloader::win::memory::resolve_rva(0x0470F768));
            }
            return cache;
        }
        inline app::GhostRecordingMetaDataData__Class* get_class() {
            return il2cpp::get_class<app::GhostRecordingMetaDataData__Class>(type_info(), "", "GhostRecordingMetaDataData");
        }
        inline app::GhostRecordingMetaDataData* create() {
            return il2cpp::create_object<app::GhostRecordingMetaDataData>(get_class());
        }
    } // namespace GhostRecordingMetaDataData
} // namespace app::classes::types
