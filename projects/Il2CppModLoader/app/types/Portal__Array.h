#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Portal__Array {
        namespace {
            inline app::Portal__Array__Class* type_info_ref = nullptr;
        }
        inline app::Portal__Array__Class** type_info = &type_info_ref;
        inline app::Portal__Array__Class* get_class() {
            return il2cpp::get_class<app::Portal__Array__Class>(type_info, "", "Portal[]");
        }
        inline app::Portal__Array* create() {
            return il2cpp::create_object<app::Portal__Array>(get_class());
        }
    } // namespace Portal__Array
} // namespace app::classes::types
