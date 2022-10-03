#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberPoolItem__Array {
        namespace {
            app::UberPoolItem__Array__Class* type_info_ref = nullptr;
        }
        app::UberPoolItem__Array__Class** type_info = &type_info_ref;
        inline app::UberPoolItem__Array__Class* get_class() {
            return il2cpp::get_class<app::UberPoolItem__Array__Class>(type_info, "", "UberPoolItem[]");
        }
        inline app::UberPoolItem__Array* create() {
            return il2cpp::create_object<app::UberPoolItem__Array>(get_class());
        }
    } // namespace UberPoolItem__Array
} // namespace app::classes::types
