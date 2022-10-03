#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SinkProviderData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SinkProviderData__Class** type_info;
        inline app::SinkProviderData__Class* get_class() {
            return il2cpp::get_class<app::SinkProviderData__Class>(type_info, "System.Runtime.Remoting.Channels", "SinkProviderData");
        }
        inline app::SinkProviderData* create() {
            return il2cpp::create_object<app::SinkProviderData>(get_class());
        }
    } // namespace SinkProviderData
} // namespace app::classes::types
