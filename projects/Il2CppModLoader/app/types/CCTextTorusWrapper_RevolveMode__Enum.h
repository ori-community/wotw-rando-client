#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CCTextTorusWrapper_RevolveMode__Enum {
        namespace {
            app::CCTextTorusWrapper_RevolveMode__Enum__Class* type_info_ref = nullptr;
        }
        app::CCTextTorusWrapper_RevolveMode__Enum__Class** type_info = &type_info_ref;
        inline app::CCTextTorusWrapper_RevolveMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::CCTextTorusWrapper_RevolveMode__Enum__Class>(type_info, "", "CCTextTorusWrapper", "RevolveMode");
        }
        inline app::CCTextTorusWrapper_RevolveMode__Enum* create() {
            return il2cpp::create_object<app::CCTextTorusWrapper_RevolveMode__Enum>(get_class());
        }
    } // namespace CCTextTorusWrapper_RevolveMode__Enum
} // namespace app::classes::types
