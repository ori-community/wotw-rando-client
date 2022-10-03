#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkDynamicSequenceType__Enum {
        namespace {
            app::AkDynamicSequenceType__Enum__Class* type_info_ref = nullptr;
        }
        app::AkDynamicSequenceType__Enum__Class** type_info = &type_info_ref;
        inline app::AkDynamicSequenceType__Enum__Class* get_class() {
            return il2cpp::get_class<app::AkDynamicSequenceType__Enum__Class>(type_info, "", "AkDynamicSequenceType");
        }
        inline app::AkDynamicSequenceType__Enum* create() {
            return il2cpp::create_object<app::AkDynamicSequenceType__Enum>(get_class());
        }
    } // namespace AkDynamicSequenceType__Enum
} // namespace app::classes::types
