#pragma once
#include <Modloader/app/structs/CrossAppDomainSink_ProcessMessageRes.h>
#include <Modloader/app/structs/CrossAppDomainSink_ProcessMessageRes__Boxed.h>
#include <Modloader/app/structs/CrossAppDomainSink_ProcessMessageRes__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CrossAppDomainSink_ProcessMessageRes {
        inline app::CrossAppDomainSink_ProcessMessageRes__Class** type_info() {
            static app::CrossAppDomainSink_ProcessMessageRes__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CrossAppDomainSink_ProcessMessageRes__Class**)(modloader::win::memory::resolve_rva(0x0473A4C8));
            }
            return cache;
        }
        inline app::CrossAppDomainSink_ProcessMessageRes__Class* get_class() {
            return il2cpp::get_nested_class<app::CrossAppDomainSink_ProcessMessageRes__Class>(type_info(), "System.Runtime.Remoting.Channels", "CrossAppDomainSink", "ProcessMessageRes");
        }
        inline app::CrossAppDomainSink_ProcessMessageRes* create() {
            return il2cpp::create_object<app::CrossAppDomainSink_ProcessMessageRes>(get_class());
        }
        inline app::CrossAppDomainSink_ProcessMessageRes__Boxed* box(app::CrossAppDomainSink_ProcessMessageRes value) {
            return il2cpp::box_value<app::CrossAppDomainSink_ProcessMessageRes__Boxed>(get_class(), value);
        }
    } // namespace CrossAppDomainSink_ProcessMessageRes
} // namespace app::classes::types
