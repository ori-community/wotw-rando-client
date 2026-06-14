#pragma once
#include <Modloader/app/structs/MaskMode__Enum.h>
#include <Modloader/app/structs/MaskMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MaskMode__Enum {
        inline app::MaskMode__Enum__Class** type_info() {
            static app::MaskMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MaskMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MaskMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::MaskMode__Enum__Class>(type_info(), "", "MaskMode");
        }
        inline app::MaskMode__Enum* create() {
            return il2cpp::create_object<app::MaskMode__Enum>(get_class());
        }
    } // namespace MaskMode__Enum
} // namespace app::classes::types
