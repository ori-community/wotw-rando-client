#pragma once
#include <Modloader/app/structs/IMessageCtrl.h>
#include <Modloader/app/structs/IMessageCtrl__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IMessageCtrl {
        inline app::IMessageCtrl__Class** type_info() {
            static app::IMessageCtrl__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IMessageCtrl__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IMessageCtrl__Class* get_class() {
            return il2cpp::get_class<app::IMessageCtrl__Class>(type_info(), "System.Runtime.Remoting.Messaging", "IMessageCtrl");
        }
    } // namespace IMessageCtrl
} // namespace app::classes::types
