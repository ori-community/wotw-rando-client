#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CrossAppDomainSink {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CrossAppDomainSink__Class** type_info;
        inline app::CrossAppDomainSink__Class* get_class() {
            return il2cpp::get_class<app::CrossAppDomainSink__Class>(type_info, "System.Runtime.Remoting.Channels", "CrossAppDomainSink");
        }
        inline app::CrossAppDomainSink* create() {
            return il2cpp::create_object<app::CrossAppDomainSink>(get_class());
        }
    } // namespace CrossAppDomainSink
} // namespace app::classes::types
