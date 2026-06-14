#pragma once
#include <Modloader/app/structs/CADMethodCallMessage.h>
#include <Modloader/app/structs/CADMethodCallMessage__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CADMethodCallMessage {
        inline app::CADMethodCallMessage__Class** type_info() {
            static app::CADMethodCallMessage__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CADMethodCallMessage__Class**)(modloader::win::memory::resolve_rva(0x0475F090));
            }
            return cache;
        }
        inline app::CADMethodCallMessage__Class* get_class() {
            return il2cpp::get_class<app::CADMethodCallMessage__Class>(type_info(), "System.Runtime.Remoting.Messaging", "CADMethodCallMessage");
        }
        inline app::CADMethodCallMessage* create() {
            return il2cpp::create_object<app::CADMethodCallMessage>(get_class());
        }
    } // namespace CADMethodCallMessage
} // namespace app::classes::types
