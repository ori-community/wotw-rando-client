#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PresetSaveComponentSettings__Class.h>
#include <Modloader/app/structs/PresetSaveComponentSettings.h>

namespace app::classes::types {
    namespace PresetSaveComponentSettings {
        namespace {
            inline app::PresetSaveComponentSettings__Class* type_info_ref = nullptr;
        }
        inline app::PresetSaveComponentSettings__Class** type_info = &type_info_ref;
        inline app::PresetSaveComponentSettings__Class* get_class() {
            return il2cpp::get_class<app::PresetSaveComponentSettings__Class>(type_info, "", "PresetSaveComponentSettings");
        }
        inline app::PresetSaveComponentSettings* create() {
            return il2cpp::create_object<app::PresetSaveComponentSettings>(get_class());
        }
    } // namespace PresetSaveComponentSettings
} // namespace app::classes::types
