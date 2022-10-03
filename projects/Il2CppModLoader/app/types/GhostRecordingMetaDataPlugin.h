#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GhostRecordingMetaDataPlugin {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GhostRecordingMetaDataPlugin__Class** type_info;
        inline app::GhostRecordingMetaDataPlugin__Class* get_class() {
            return il2cpp::get_class<app::GhostRecordingMetaDataPlugin__Class>(type_info, "", "GhostRecordingMetaDataPlugin");
        }
        inline app::GhostRecordingMetaDataPlugin* create() {
            return il2cpp::create_object<app::GhostRecordingMetaDataPlugin>(get_class());
        }
    } // namespace GhostRecordingMetaDataPlugin
} // namespace app::classes::types
