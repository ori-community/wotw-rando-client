#pragma once
#include <Modloader/app/structs/FrogPlaceholder__Array.h>
#include <Modloader/app/structs/FrogPlaceholder__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FrogPlaceholder__Array {
        inline app::FrogPlaceholder__Array__Class** type_info() {
            static app::FrogPlaceholder__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FrogPlaceholder__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FrogPlaceholder__Array__Class* get_class() {
            return il2cpp::get_class<app::FrogPlaceholder__Array__Class>(type_info(), "", "FrogPlaceholder[]");
        }
        inline app::FrogPlaceholder__Array* create() {
            return il2cpp::create_object<app::FrogPlaceholder__Array>(get_class());
        }
    } // namespace FrogPlaceholder__Array
} // namespace app::classes::types
