#pragma once
#include <Modloader/app/structs/ColosseumBase.h>
#include <Modloader/app/structs/ColosseumBase__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ColosseumBase {
        inline app::ColosseumBase__Class** type_info() {
            static app::ColosseumBase__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ColosseumBase__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ColosseumBase__Class* get_class() {
            return il2cpp::get_class<app::ColosseumBase__Class>(type_info(), "", "ColosseumBase");
        }
        inline app::ColosseumBase* create() {
            return il2cpp::create_object<app::ColosseumBase>(get_class());
        }
    } // namespace ColosseumBase
} // namespace app::classes::types
