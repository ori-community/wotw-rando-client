#pragma once
#include <Modloader/app/structs/BitMaskAttribute.h>
#include <Modloader/app/structs/BitMaskAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BitMaskAttribute {
        inline app::BitMaskAttribute__Class** type_info() {
            static app::BitMaskAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BitMaskAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BitMaskAttribute__Class* get_class() {
            return il2cpp::get_class<app::BitMaskAttribute__Class>(type_info(), "Moon", "BitMaskAttribute");
        }
        inline app::BitMaskAttribute* create() {
            return il2cpp::create_object<app::BitMaskAttribute>(get_class());
        }
    } // namespace BitMaskAttribute
} // namespace app::classes::types
