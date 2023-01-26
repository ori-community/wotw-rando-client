#pragma once
#include <Modloader/app/structs/IContributeEnvoySink.h>
#include <Modloader/app/structs/IContributeEnvoySink__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IContributeEnvoySink {
        inline app::IContributeEnvoySink__Class** type_info() {
            static app::IContributeEnvoySink__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IContributeEnvoySink__Class**)(modloader::win::memory::resolve_rva(0x04718BF8));
            }
            return cache;
        }
        inline app::IContributeEnvoySink__Class* get_class() {
            return il2cpp::get_class<app::IContributeEnvoySink__Class>(type_info(), "System.Runtime.Remoting.Contexts", "IContributeEnvoySink");
        }
    } // namespace IContributeEnvoySink
} // namespace app::classes::types
