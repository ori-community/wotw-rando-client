#pragma once
#include <Modloader/app/structs/HintSize__Enum.h>
#include <Modloader/app/structs/HintSize__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HintSize__Enum {
        inline app::HintSize__Enum__Class** type_info() {
            static app::HintSize__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HintSize__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HintSize__Enum__Class* get_class() {
            return il2cpp::get_class<app::HintSize__Enum__Class>(type_info(), "", "HintSize");
        }
        inline app::HintSize__Enum* create() {
            return il2cpp::create_object<app::HintSize__Enum>(get_class());
        }
    } // namespace HintSize__Enum
} // namespace app::classes::types
