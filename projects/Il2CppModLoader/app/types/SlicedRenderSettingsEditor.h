#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SlicedRenderSettingsEditor {
        inline app::SlicedRenderSettingsEditor__Class** type_info = (app::SlicedRenderSettingsEditor__Class**)(modloader::win::memory::resolve_rva(0x0470B8A0));
        inline app::SlicedRenderSettingsEditor__Class* get_class() {
            return il2cpp::get_class<app::SlicedRenderSettingsEditor__Class>(type_info, "frameworks.renderPipeline", "SlicedRenderSettingsEditor");
        }
        inline app::SlicedRenderSettingsEditor* create() {
            return il2cpp::create_object<app::SlicedRenderSettingsEditor>(get_class());
        }
    } // namespace SlicedRenderSettingsEditor
} // namespace app::classes::types
