#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace WwiseBootstrapConfiguration {
        inline app::WwiseBootstrapConfiguration__Class** type_info = (app::WwiseBootstrapConfiguration__Class**)(modloader::win::memory::resolve_rva(0x04783AF0));
        inline app::WwiseBootstrapConfiguration__Class* get_class() {
            return il2cpp::get_class<app::WwiseBootstrapConfiguration__Class>(type_info, "Moon.Wwise", "WwiseBootstrapConfiguration");
        }
        inline app::WwiseBootstrapConfiguration* create() {
            return il2cpp::create_object<app::WwiseBootstrapConfiguration>(get_class());
        }
    } // namespace WwiseBootstrapConfiguration
} // namespace app::classes::types
