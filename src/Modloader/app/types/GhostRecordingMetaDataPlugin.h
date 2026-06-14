#pragma once
#include <Modloader/app/structs/GhostRecordingMetaDataPlugin.h>
#include <Modloader/app/structs/GhostRecordingMetaDataPlugin__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GhostRecordingMetaDataPlugin {
        inline app::GhostRecordingMetaDataPlugin__Class** type_info() {
            static app::GhostRecordingMetaDataPlugin__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GhostRecordingMetaDataPlugin__Class**)(modloader::win::memory::resolve_rva(0x04745ED0));
            }
            return cache;
        }
        inline app::GhostRecordingMetaDataPlugin__Class* get_class() {
            return il2cpp::get_class<app::GhostRecordingMetaDataPlugin__Class>(type_info(), "", "GhostRecordingMetaDataPlugin");
        }
        inline app::GhostRecordingMetaDataPlugin* create() {
            return il2cpp::create_object<app::GhostRecordingMetaDataPlugin>(get_class());
        }
    } // namespace GhostRecordingMetaDataPlugin
} // namespace app::classes::types
