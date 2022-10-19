#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GhostRecordingMetaDataData {
        inline app::GhostRecordingMetaDataData__Class** type_info = (app::GhostRecordingMetaDataData__Class**)(modloader::win::memory::resolve_rva(0x0470F768));
        inline app::GhostRecordingMetaDataData__Class* get_class() {
            return il2cpp::get_class<app::GhostRecordingMetaDataData__Class>(type_info, "", "GhostRecordingMetaDataData");
        }
        inline app::GhostRecordingMetaDataData* create() {
            return il2cpp::create_object<app::GhostRecordingMetaDataData>(get_class());
        }
    } // namespace GhostRecordingMetaDataData
} // namespace app::classes::types
