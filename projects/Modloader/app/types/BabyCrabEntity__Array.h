#pragma once
#include <Modloader/app/structs/BabyCrabEntity__Array.h>
#include <Modloader/app/structs/BabyCrabEntity__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BabyCrabEntity__Array {
        inline app::BabyCrabEntity__Array__Class** type_info() {
            static app::BabyCrabEntity__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BabyCrabEntity__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BabyCrabEntity__Array__Class* get_class() {
            return il2cpp::get_class<app::BabyCrabEntity__Array__Class>(type_info(), "", "BabyCrabEntity[]");
        }
        inline app::BabyCrabEntity__Array* create() {
            return il2cpp::create_object<app::BabyCrabEntity__Array>(get_class());
        }
    } // namespace BabyCrabEntity__Array
} // namespace app::classes::types
