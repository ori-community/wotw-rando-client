#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DepotId_t__Array {
        namespace {
            app::DepotId_t__Array__Class* type_info_ref = nullptr;
        }
        app::DepotId_t__Array__Class** type_info = &type_info_ref;
        inline app::DepotId_t__Array__Class* get_class() {
            return il2cpp::get_class<app::DepotId_t__Array__Class>(type_info, "Steamworks", "DepotId_t[]");
        }
        inline app::DepotId_t__Array* create() {
            return il2cpp::create_object<app::DepotId_t__Array>(get_class());
        }
    } // namespace DepotId_t__Array
} // namespace app::classes::types
