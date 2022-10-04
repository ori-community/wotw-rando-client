#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IContributeServerContextSink {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IContributeServerContextSink__Class** type_info;
        inline app::IContributeServerContextSink__Class* get_class() {
            return il2cpp::get_class<app::IContributeServerContextSink__Class>(type_info, "System.Runtime.Remoting.Contexts", "IContributeServerContextSink");
        }
    } // namespace IContributeServerContextSink
} // namespace app::classes::types
