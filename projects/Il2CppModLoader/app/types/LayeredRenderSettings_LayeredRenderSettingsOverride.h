#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LayeredRenderSettings_LayeredRenderSettingsOverride {
        inline app::LayeredRenderSettings_LayeredRenderSettingsOverride__Class** type_info = (app::LayeredRenderSettings_LayeredRenderSettingsOverride__Class**)(modloader::win::memory::resolve_rva(0x04753B90));
        inline app::LayeredRenderSettings_LayeredRenderSettingsOverride__Class* get_class() {
            return il2cpp::get_nested_class<app::LayeredRenderSettings_LayeredRenderSettingsOverride__Class>(type_info, "", "LayeredRenderSettings", "LayeredRenderSettingsOverride");
        }
        inline app::LayeredRenderSettings_LayeredRenderSettingsOverride* create() {
            return il2cpp::create_object<app::LayeredRenderSettings_LayeredRenderSettingsOverride>(get_class());
        }
        inline app::LayeredRenderSettings_LayeredRenderSettingsOverride__Boxed* box(app::LayeredRenderSettings_LayeredRenderSettingsOverride value) {
            return il2cpp::box_value<app::LayeredRenderSettings_LayeredRenderSettingsOverride__Boxed>(get_class(), value);
        }
        inline app::LayeredRenderSettings_LayeredRenderSettingsOverride__Array* create_array(int size) {
            return il2cpp::array_new<app::LayeredRenderSettings_LayeredRenderSettingsOverride__Array>(get_class(), size);
        }
        inline app::LayeredRenderSettings_LayeredRenderSettingsOverride__Array* create_array(const std::vector<app::LayeredRenderSettings_LayeredRenderSettingsOverride>& items) {
            return il2cpp::array_new<app::LayeredRenderSettings_LayeredRenderSettingsOverride__Array>(get_class(), items);
        }
    } // namespace LayeredRenderSettings_LayeredRenderSettingsOverride
} // namespace app::classes::types
