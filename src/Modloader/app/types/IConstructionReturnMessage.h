#pragma once
#include <Modloader/app/structs/IConstructionReturnMessage.h>
#include <Modloader/app/structs/IConstructionReturnMessage__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IConstructionReturnMessage {
        inline app::IConstructionReturnMessage__Class** type_info() {
            static app::IConstructionReturnMessage__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IConstructionReturnMessage__Class**)(modloader::win::memory::resolve_rva(0x0477A2B8));
            }
            return cache;
        }
        inline app::IConstructionReturnMessage__Class* get_class() {
            return il2cpp::get_class<app::IConstructionReturnMessage__Class>(type_info(), "System.Runtime.Remoting.Activation", "IConstructionReturnMessage");
        }
    } // namespace IConstructionReturnMessage
} // namespace app::classes::types
