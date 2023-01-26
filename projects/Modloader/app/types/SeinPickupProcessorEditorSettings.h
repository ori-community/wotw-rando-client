#pragma once
#include <Modloader/app/structs/SeinPickupProcessorEditorSettings.h>
#include <Modloader/app/structs/SeinPickupProcessorEditorSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinPickupProcessorEditorSettings {
        inline app::SeinPickupProcessorEditorSettings__Class** type_info() {
            static app::SeinPickupProcessorEditorSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinPickupProcessorEditorSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinPickupProcessorEditorSettings__Class* get_class() {
            return il2cpp::get_class<app::SeinPickupProcessorEditorSettings__Class>(type_info(), "", "SeinPickupProcessorEditorSettings");
        }
        inline app::SeinPickupProcessorEditorSettings* create() {
            return il2cpp::create_object<app::SeinPickupProcessorEditorSettings>(get_class());
        }
    } // namespace SeinPickupProcessorEditorSettings
} // namespace app::classes::types
