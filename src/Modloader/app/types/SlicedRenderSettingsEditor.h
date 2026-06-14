#pragma once
#include <Modloader/app/structs/SlicedRenderSettingsEditor.h>
#include <Modloader/app/structs/SlicedRenderSettingsEditor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SlicedRenderSettingsEditor {
        inline app::SlicedRenderSettingsEditor__Class** type_info() {
            static app::SlicedRenderSettingsEditor__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SlicedRenderSettingsEditor__Class**)(modloader::win::memory::resolve_rva(0x0470B8A0));
            }
            return cache;
        }
        inline app::SlicedRenderSettingsEditor__Class* get_class() {
            return il2cpp::get_class<app::SlicedRenderSettingsEditor__Class>(type_info(), "frameworks.renderPipeline", "SlicedRenderSettingsEditor");
        }
        inline app::SlicedRenderSettingsEditor* create() {
            return il2cpp::create_object<app::SlicedRenderSettingsEditor>(get_class());
        }
    } // namespace SlicedRenderSettingsEditor
} // namespace app::classes::types
