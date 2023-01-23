#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IMessageCtrl__Class.h>

namespace app::classes::types {
    namespace IMessageCtrl {
        namespace {
            inline app::IMessageCtrl__Class* type_info_ref = nullptr;
        }
        inline app::IMessageCtrl__Class** type_info = &type_info_ref;
        inline app::IMessageCtrl__Class* get_class() {
            return il2cpp::get_class<app::IMessageCtrl__Class>(type_info, "System.Runtime.Remoting.Messaging", "IMessageCtrl");
        }
    } // namespace IMessageCtrl
} // namespace app::classes::types
