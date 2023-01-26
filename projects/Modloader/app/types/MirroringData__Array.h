#pragma once
#include <Modloader/app/structs/MirroringData__Array.h>
#include <Modloader/app/structs/MirroringData__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MirroringData__Array {
        inline app::MirroringData__Array__Class** type_info() {
            static app::MirroringData__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MirroringData__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MirroringData__Array__Class* get_class() {
            return il2cpp::get_class<app::MirroringData__Array__Class>(type_info(), "", "MirroringData[]");
        }
        inline app::MirroringData__Array* create() {
            return il2cpp::create_object<app::MirroringData__Array>(get_class());
        }
    } // namespace MirroringData__Array
} // namespace app::classes::types
