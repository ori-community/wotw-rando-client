#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IContributeDynamicSink {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IContributeDynamicSink__Class** type_info;
        inline app::IContributeDynamicSink__Class* get_class() {
            return il2cpp::get_class<app::IContributeDynamicSink__Class>(type_info, "System.Runtime.Remoting.Contexts", "IContributeDynamicSink");
        }
    } // namespace IContributeDynamicSink
} // namespace app::classes::types
