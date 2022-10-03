#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkGroupType__Enum {
        namespace {
            app::AkGroupType__Enum__Class* type_info_ref = nullptr;
        }
        app::AkGroupType__Enum__Class** type_info = &type_info_ref;
        inline app::AkGroupType__Enum__Class* get_class() {
            return il2cpp::get_class<app::AkGroupType__Enum__Class>(type_info, "", "AkGroupType");
        }
        inline app::AkGroupType__Enum* create() {
            return il2cpp::create_object<app::AkGroupType__Enum>(get_class());
        }
    } // namespace AkGroupType__Enum
} // namespace app::classes::types
