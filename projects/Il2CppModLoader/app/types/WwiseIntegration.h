#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace WwiseIntegration {
        inline app::WwiseIntegration__Class** type_info = (app::WwiseIntegration__Class**)(modloader::win::memory::resolve_rva(0x04777990));
        inline app::WwiseIntegration__Class* get_class() {
            return il2cpp::get_class<app::WwiseIntegration__Class>(type_info, "Moon.Wwise", "WwiseIntegration");
        }
        inline app::WwiseIntegration* create() {
            return il2cpp::create_object<app::WwiseIntegration>(get_class());
        }
    } // namespace WwiseIntegration
} // namespace app::classes::types
