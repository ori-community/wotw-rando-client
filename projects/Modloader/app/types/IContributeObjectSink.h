#pragma once
#include <Modloader/app/structs/IContributeObjectSink.h>
#include <Modloader/app/structs/IContributeObjectSink__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IContributeObjectSink {
        inline app::IContributeObjectSink__Class** type_info() {
            static app::IContributeObjectSink__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IContributeObjectSink__Class**)(modloader::win::memory::resolve_rva(0x047392C0));
            }
            return cache;
        }
        inline app::IContributeObjectSink__Class* get_class() {
            return il2cpp::get_class<app::IContributeObjectSink__Class>(type_info(), "System.Runtime.Remoting.Contexts", "IContributeObjectSink");
        }
    } // namespace IContributeObjectSink
} // namespace app::classes::types
