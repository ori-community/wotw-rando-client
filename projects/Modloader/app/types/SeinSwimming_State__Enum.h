#pragma once
#include <Modloader/app/structs/SeinSwimming_State__Enum.h>
#include <Modloader/app/structs/SeinSwimming_State__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinSwimming_State__Enum {
        inline app::SeinSwimming_State__Enum__Class** type_info() {
            static app::SeinSwimming_State__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinSwimming_State__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinSwimming_State__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinSwimming_State__Enum__Class>(type_info(), "", "SeinSwimming", "State");
        }
        inline app::SeinSwimming_State__Enum* create() {
            return il2cpp::create_object<app::SeinSwimming_State__Enum>(get_class());
        }
    } // namespace SeinSwimming_State__Enum
} // namespace app::classes::types
