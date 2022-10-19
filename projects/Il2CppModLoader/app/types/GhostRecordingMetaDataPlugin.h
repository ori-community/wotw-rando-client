#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GhostRecordingMetaDataPlugin {
        inline app::GhostRecordingMetaDataPlugin__Class** type_info = (app::GhostRecordingMetaDataPlugin__Class**)(modloader::win::memory::resolve_rva(0x04745ED0));
        inline app::GhostRecordingMetaDataPlugin__Class* get_class() {
            return il2cpp::get_class<app::GhostRecordingMetaDataPlugin__Class>(type_info, "", "GhostRecordingMetaDataPlugin");
        }
        inline app::GhostRecordingMetaDataPlugin* create() {
            return il2cpp::create_object<app::GhostRecordingMetaDataPlugin>(get_class());
        }
    } // namespace GhostRecordingMetaDataPlugin
} // namespace app::classes::types
