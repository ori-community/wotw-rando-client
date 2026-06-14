#pragma once
#include <Modloader/app/structs/SavePedestal__Array.h>
#include <Modloader/app/structs/SavePedestal__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SavePedestal__Array {
        inline app::SavePedestal__Array__Class** type_info() {
            static app::SavePedestal__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SavePedestal__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SavePedestal__Array__Class* get_class() {
            return il2cpp::get_class<app::SavePedestal__Array__Class>(type_info(), "", "SavePedestal[]");
        }
        inline app::SavePedestal__Array* create() {
            return il2cpp::create_object<app::SavePedestal__Array>(get_class());
        }
    } // namespace SavePedestal__Array
} // namespace app::classes::types
