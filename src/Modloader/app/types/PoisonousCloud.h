#pragma once
#include <Modloader/app/structs/PoisonousCloud.h>
#include <Modloader/app/structs/PoisonousCloud__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PoisonousCloud {
        inline app::PoisonousCloud__Class** type_info() {
            static app::PoisonousCloud__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PoisonousCloud__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PoisonousCloud__Class* get_class() {
            return il2cpp::get_class<app::PoisonousCloud__Class>(type_info(), "", "PoisonousCloud");
        }
        inline app::PoisonousCloud* create() {
            return il2cpp::create_object<app::PoisonousCloud>(get_class());
        }
    } // namespace PoisonousCloud
} // namespace app::classes::types
