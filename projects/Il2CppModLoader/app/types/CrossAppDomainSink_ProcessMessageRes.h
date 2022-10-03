#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CrossAppDomainSink_ProcessMessageRes {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CrossAppDomainSink_ProcessMessageRes__Class** type_info;
        inline app::CrossAppDomainSink_ProcessMessageRes__Class* get_class() {
            return il2cpp::get_nested_class<app::CrossAppDomainSink_ProcessMessageRes__Class>(type_info, "System.Runtime.Remoting.Channels", "CrossAppDomainSink", "ProcessMessageRes");
        }
        inline app::CrossAppDomainSink_ProcessMessageRes* create() {
            return il2cpp::create_object<app::CrossAppDomainSink_ProcessMessageRes>(get_class());
        }
        inline app::CrossAppDomainSink_ProcessMessageRes__Boxed* box(app::CrossAppDomainSink_ProcessMessageRes value) {
            return il2cpp::box_value<app::CrossAppDomainSink_ProcessMessageRes__Boxed>(get_class(), value);
        }
    } // namespace CrossAppDomainSink_ProcessMessageRes
} // namespace app::classes::types
