#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DesaturationSettings {
        inline app::DesaturationSettings__Class** type_info = (app::DesaturationSettings__Class**)(modloader::win::memory::resolve_rva(0x047474B0));
        inline app::DesaturationSettings__Class* get_class() {
            return il2cpp::get_class<app::DesaturationSettings__Class>(type_info, "", "DesaturationSettings");
        }
        inline app::DesaturationSettings* create() {
            return il2cpp::create_object<app::DesaturationSettings>(get_class());
        }
    } // namespace DesaturationSettings
} // namespace app::classes::types
