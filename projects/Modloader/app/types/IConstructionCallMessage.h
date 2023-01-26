#pragma once
#include <Modloader/app/structs/IConstructionCallMessage.h>
#include <Modloader/app/structs/IConstructionCallMessage__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IConstructionCallMessage {
        inline app::IConstructionCallMessage__Class** type_info() {
            static app::IConstructionCallMessage__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IConstructionCallMessage__Class**)(modloader::win::memory::resolve_rva(0x04768B18));
            }
            return cache;
        }
        inline app::IConstructionCallMessage__Class* get_class() {
            return il2cpp::get_class<app::IConstructionCallMessage__Class>(type_info(), "System.Runtime.Remoting.Activation", "IConstructionCallMessage");
        }
    } // namespace IConstructionCallMessage
} // namespace app::classes::types
