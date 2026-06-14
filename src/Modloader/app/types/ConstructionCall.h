#pragma once
#include <Modloader/app/structs/ConstructionCall.h>
#include <Modloader/app/structs/ConstructionCall__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ConstructionCall {
        inline app::ConstructionCall__Class** type_info() {
            static app::ConstructionCall__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ConstructionCall__Class**)(modloader::win::memory::resolve_rva(0x04780F30));
            }
            return cache;
        }
        inline app::ConstructionCall__Class* get_class() {
            return il2cpp::get_class<app::ConstructionCall__Class>(type_info(), "System.Runtime.Remoting.Messaging", "ConstructionCall");
        }
        inline app::ConstructionCall* create() {
            return il2cpp::create_object<app::ConstructionCall>(get_class());
        }
    } // namespace ConstructionCall
} // namespace app::classes::types
