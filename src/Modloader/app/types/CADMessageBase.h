#pragma once
#include <Modloader/app/structs/CADMessageBase.h>
#include <Modloader/app/structs/CADMessageBase__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CADMessageBase {
        inline app::CADMessageBase__Class** type_info() {
            static app::CADMessageBase__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CADMessageBase__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CADMessageBase__Class* get_class() {
            return il2cpp::get_class<app::CADMessageBase__Class>(type_info(), "System.Runtime.Remoting.Messaging", "CADMessageBase");
        }
        inline app::CADMessageBase* create() {
            return il2cpp::create_object<app::CADMessageBase>(get_class());
        }
    } // namespace CADMessageBase
} // namespace app::classes::types
