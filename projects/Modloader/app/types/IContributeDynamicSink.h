#pragma once
#include <Modloader/app/structs/IContributeDynamicSink.h>
#include <Modloader/app/structs/IContributeDynamicSink__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IContributeDynamicSink {
        inline app::IContributeDynamicSink__Class** type_info() {
            static app::IContributeDynamicSink__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IContributeDynamicSink__Class**)(modloader::win::memory::resolve_rva(0x04775970));
            }
            return cache;
        }
        inline app::IContributeDynamicSink__Class* get_class() {
            return il2cpp::get_class<app::IContributeDynamicSink__Class>(type_info(), "System.Runtime.Remoting.Contexts", "IContributeDynamicSink");
        }
    } // namespace IContributeDynamicSink
} // namespace app::classes::types
