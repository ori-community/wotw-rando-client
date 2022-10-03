#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IPushable__Array {
        namespace {
            app::IPushable__Array__Class* type_info_ref = nullptr;
        }
        app::IPushable__Array__Class** type_info = &type_info_ref;
        inline app::IPushable__Array__Class* get_class() {
            return il2cpp::get_class<app::IPushable__Array__Class>(type_info, "", "IPushable[]");
        }
        inline app::IPushable__Array* create() {
            return il2cpp::create_object<app::IPushable__Array>(get_class());
        }
    } // namespace IPushable__Array
} // namespace app::classes::types
