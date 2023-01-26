#pragma once
#include <Modloader/app/structs/CADMethodReturnMessage.h>
#include <Modloader/app/structs/CADMethodReturnMessage__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CADMethodReturnMessage {
        inline app::CADMethodReturnMessage__Class** type_info() {
            static app::CADMethodReturnMessage__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CADMethodReturnMessage__Class**)(modloader::win::memory::resolve_rva(0x04709B20));
            }
            return cache;
        }
        inline app::CADMethodReturnMessage__Class* get_class() {
            return il2cpp::get_class<app::CADMethodReturnMessage__Class>(type_info(), "System.Runtime.Remoting.Messaging", "CADMethodReturnMessage");
        }
        inline app::CADMethodReturnMessage* create() {
            return il2cpp::create_object<app::CADMethodReturnMessage>(get_class());
        }
    } // namespace CADMethodReturnMessage
} // namespace app::classes::types
