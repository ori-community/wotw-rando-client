#pragma once
#include <Modloader/app/structs/DesaturationSettings.h>
#include <Modloader/app/structs/DesaturationSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DesaturationSettings {
        inline app::DesaturationSettings__Class** type_info() {
            static app::DesaturationSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DesaturationSettings__Class**)(modloader::win::memory::resolve_rva(0x047474B0));
            }
            return cache;
        }
        inline app::DesaturationSettings__Class* get_class() {
            return il2cpp::get_class<app::DesaturationSettings__Class>(type_info(), "", "DesaturationSettings");
        }
        inline app::DesaturationSettings* create() {
            return il2cpp::create_object<app::DesaturationSettings>(get_class());
        }
    } // namespace DesaturationSettings
} // namespace app::classes::types
