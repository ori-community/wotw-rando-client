#pragma once
#include <Modloader/app/structs/RecorderSettings.h>
#include <Modloader/app/structs/RecorderSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RecorderSettings {
        inline app::RecorderSettings__Class** type_info() {
            static app::RecorderSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RecorderSettings__Class**)(modloader::win::memory::resolve_rva(0x0475FDB8));
            }
            return cache;
        }
        inline app::RecorderSettings__Class* get_class() {
            return il2cpp::get_class<app::RecorderSettings__Class>(type_info(), "Moon.ContinuousIntegration", "RecorderSettings");
        }
        inline app::RecorderSettings* create() {
            return il2cpp::create_object<app::RecorderSettings>(get_class());
        }
    } // namespace RecorderSettings
} // namespace app::classes::types
