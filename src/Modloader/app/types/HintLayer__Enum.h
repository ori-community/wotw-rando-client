#pragma once
#include <Modloader/app/structs/HintLayer__Enum.h>
#include <Modloader/app/structs/HintLayer__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HintLayer__Enum {
        inline app::HintLayer__Enum__Class** type_info() {
            static app::HintLayer__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HintLayer__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HintLayer__Enum__Class* get_class() {
            return il2cpp::get_class<app::HintLayer__Enum__Class>(type_info(), "", "HintLayer");
        }
        inline app::HintLayer__Enum* create() {
            return il2cpp::create_object<app::HintLayer__Enum>(get_class());
        }
    } // namespace HintLayer__Enum
} // namespace app::classes::types
