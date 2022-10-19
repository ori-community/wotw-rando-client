#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CharMetaData_1 {
        namespace {
            inline app::CharMetaData_1__Class* type_info_ref = nullptr;
        }
        inline app::CharMetaData_1__Class** type_info = &type_info_ref;
        inline app::CharMetaData_1__Class* get_class() {
            return il2cpp::get_class<app::CharMetaData_1__Class>(type_info, "Moon.UI", "CharMetaData");
        }
        inline app::CharMetaData_1* create() {
            return il2cpp::create_object<app::CharMetaData_1>(get_class());
        }
        inline app::CharMetaData_1__Boxed* box(app::CharMetaData_1 value) {
            return il2cpp::box_value<app::CharMetaData_1__Boxed>(get_class(), value);
        }
    } // namespace CharMetaData_1
} // namespace app::classes::types
