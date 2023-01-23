#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MaterialTypeVFXSettings__Class.h>
#include <Modloader/app/structs/MaterialTypeVFXSettings.h>

namespace app::classes::types {
    namespace MaterialTypeVFXSettings {
        inline app::MaterialTypeVFXSettings__Class** type_info = (app::MaterialTypeVFXSettings__Class**)(modloader::win::memory::resolve_rva(0x04795848));
        inline app::MaterialTypeVFXSettings__Class* get_class() {
            return il2cpp::get_class<app::MaterialTypeVFXSettings__Class>(type_info, "", "MaterialTypeVFXSettings");
        }
        inline app::MaterialTypeVFXSettings* create() {
            return il2cpp::create_object<app::MaterialTypeVFXSettings>(get_class());
        }
    } // namespace MaterialTypeVFXSettings
} // namespace app::classes::types
