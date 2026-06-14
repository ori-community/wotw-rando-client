#pragma once
#include <Modloader/app/structs/CCTextTorusWrapper_RevolveMode__Enum.h>
#include <Modloader/app/structs/CCTextTorusWrapper_RevolveMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CCTextTorusWrapper_RevolveMode__Enum {
        inline app::CCTextTorusWrapper_RevolveMode__Enum__Class** type_info() {
            static app::CCTextTorusWrapper_RevolveMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CCTextTorusWrapper_RevolveMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CCTextTorusWrapper_RevolveMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::CCTextTorusWrapper_RevolveMode__Enum__Class>(type_info(), "", "CCTextTorusWrapper", "RevolveMode");
        }
        inline app::CCTextTorusWrapper_RevolveMode__Enum* create() {
            return il2cpp::create_object<app::CCTextTorusWrapper_RevolveMode__Enum>(get_class());
        }
    } // namespace CCTextTorusWrapper_RevolveMode__Enum
} // namespace app::classes::types
