#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinPickupProcessorEditorSettings {
        namespace {
            inline app::SeinPickupProcessorEditorSettings__Class* type_info_ref = nullptr;
        }
        inline app::SeinPickupProcessorEditorSettings__Class** type_info = &type_info_ref;
        inline app::SeinPickupProcessorEditorSettings__Class* get_class() {
            return il2cpp::get_class<app::SeinPickupProcessorEditorSettings__Class>(type_info, "", "SeinPickupProcessorEditorSettings");
        }
        inline app::SeinPickupProcessorEditorSettings* create() {
            return il2cpp::create_object<app::SeinPickupProcessorEditorSettings>(get_class());
        }
    } // namespace SeinPickupProcessorEditorSettings
} // namespace app::classes::types
