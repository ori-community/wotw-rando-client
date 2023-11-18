#pragma once
#include <Modloader/app/structs/IMethodMessage.h>
#include <Modloader/app/structs/IMethodMessage__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IMethodMessage {
        inline app::IMethodMessage__Class** type_info() {
            static app::IMethodMessage__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IMethodMessage__Class**)(modloader::win::memory::resolve_rva(0x0477D2B8));
            }
            return cache;
        }
        inline app::IMethodMessage__Class* get_class() {
            return il2cpp::get_class<app::IMethodMessage__Class>(type_info(), "System.Runtime.Remoting.Messaging", "IMethodMessage");
        }
    } // namespace IMethodMessage
} // namespace app::classes::types
