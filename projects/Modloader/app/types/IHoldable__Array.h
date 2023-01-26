#pragma once
#include <Modloader/app/structs/IHoldable__Array.h>
#include <Modloader/app/structs/IHoldable__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IHoldable__Array {
        inline app::IHoldable__Array__Class** type_info() {
            static app::IHoldable__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IHoldable__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IHoldable__Array__Class* get_class() {
            return il2cpp::get_class<app::IHoldable__Array__Class>(type_info(), "", "IHoldable[]");
        }
        inline app::IHoldable__Array* create() {
            return il2cpp::create_object<app::IHoldable__Array>(get_class());
        }
    } // namespace IHoldable__Array
} // namespace app::classes::types
