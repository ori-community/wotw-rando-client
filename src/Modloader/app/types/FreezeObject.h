#pragma once
#include <Modloader/app/structs/FreezeObject.h>
#include <Modloader/app/structs/FreezeObject__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FreezeObject {
        inline app::FreezeObject__Class** type_info() {
            static app::FreezeObject__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FreezeObject__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FreezeObject__Class* get_class() {
            return il2cpp::get_class<app::FreezeObject__Class>(type_info(), "", "FreezeObject");
        }
        inline app::FreezeObject* create() {
            return il2cpp::create_object<app::FreezeObject>(get_class());
        }
    } // namespace FreezeObject
} // namespace app::classes::types
