#pragma once
#include <Modloader/app/structs/TransparencyMode__Enum.h>
#include <Modloader/app/structs/TransparencyMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TransparencyMode__Enum {
        inline app::TransparencyMode__Enum__Class** type_info() {
            static app::TransparencyMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TransparencyMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TransparencyMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::TransparencyMode__Enum__Class>(type_info(), "Moon.Timeline", "TransparencyMode");
        }
        inline app::TransparencyMode__Enum* create() {
            return il2cpp::create_object<app::TransparencyMode__Enum>(get_class());
        }
    } // namespace TransparencyMode__Enum
} // namespace app::classes::types
