#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AmplifyColorBase__Array {
        namespace {
            inline app::AmplifyColorBase__Array__Class* type_info_ref = nullptr;
        }
        inline app::AmplifyColorBase__Array__Class** type_info = &type_info_ref;
        inline app::AmplifyColorBase__Array__Class* get_class() {
            return il2cpp::get_class<app::AmplifyColorBase__Array__Class>(type_info, "", "AmplifyColorBase[]");
        }
        inline app::AmplifyColorBase__Array* create() {
            return il2cpp::create_object<app::AmplifyColorBase__Array>(get_class());
        }
    } // namespace AmplifyColorBase__Array
} // namespace app::classes::types
