#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Entry__Array {
        namespace {
            app::Entry__Array__Class* type_info_ref = nullptr;
        }
        app::Entry__Array__Class** type_info = &type_info_ref;
        inline app::Entry__Array__Class* get_class() {
            return il2cpp::get_class<app::Entry__Array__Class>(type_info, "Moon.Race.Networking", "Entry[]");
        }
        inline app::Entry__Array* create() {
            return il2cpp::create_object<app::Entry__Array>(get_class());
        }
    } // namespace Entry__Array
} // namespace app::classes::types
