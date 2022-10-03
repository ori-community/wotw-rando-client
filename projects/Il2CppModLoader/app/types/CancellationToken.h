#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CancellationToken {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CancellationToken__Class** type_info;
        inline app::CancellationToken__Class* get_class() {
            return il2cpp::get_class<app::CancellationToken__Class>(type_info, "System.Threading", "CancellationToken");
        }
        inline app::CancellationToken* create() {
            return il2cpp::create_object<app::CancellationToken>(get_class());
        }
        inline app::CancellationToken__Boxed* box(app::CancellationToken value) {
            return il2cpp::box_value<app::CancellationToken__Boxed>(get_class(), value);
        }
        inline app::CancellationToken__Array* create_array(int size) {
            return il2cpp::array_new<app::CancellationToken__Array>(get_class(), size);
        }
    } // namespace CancellationToken
} // namespace app::classes::types
