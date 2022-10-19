#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IFrustumEnabled__Array {
        namespace {
            inline app::IFrustumEnabled__Array__Class* type_info_ref = nullptr;
        }
        inline app::IFrustumEnabled__Array__Class** type_info = &type_info_ref;
        inline app::IFrustumEnabled__Array__Class* get_class() {
            return il2cpp::get_class<app::IFrustumEnabled__Array__Class>(type_info, "Game", "IFrustumEnabled[]");
        }
        inline app::IFrustumEnabled__Array* create() {
            return il2cpp::create_object<app::IFrustumEnabled__Array>(get_class());
        }
    } // namespace IFrustumEnabled__Array
} // namespace app::classes::types
