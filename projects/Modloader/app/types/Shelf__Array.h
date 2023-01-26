#pragma once
#include <Modloader/app/structs/Shelf__Array.h>
#include <Modloader/app/structs/Shelf__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Shelf__Array {
        inline app::Shelf__Array__Class** type_info() {
            static app::Shelf__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Shelf__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Shelf__Array__Class* get_class() {
            return il2cpp::get_class<app::Shelf__Array__Class>(type_info(), "", "Shelf[]");
        }
        inline app::Shelf__Array* create() {
            return il2cpp::create_object<app::Shelf__Array>(get_class());
        }
    } // namespace Shelf__Array
} // namespace app::classes::types
