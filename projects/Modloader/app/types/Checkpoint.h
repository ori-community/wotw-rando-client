#pragma once
#include <Modloader/app/structs/Checkpoint.h>
#include <Modloader/app/structs/Checkpoint__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Checkpoint {
        inline app::Checkpoint__Class** type_info() {
            static app::Checkpoint__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Checkpoint__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Checkpoint__Class* get_class() {
            return il2cpp::get_class<app::Checkpoint__Class>(type_info(), "", "Checkpoint");
        }
        inline app::Checkpoint* create() {
            return il2cpp::create_object<app::Checkpoint>(get_class());
        }
    } // namespace Checkpoint
} // namespace app::classes::types
