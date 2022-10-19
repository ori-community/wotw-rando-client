#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IHoldable__Array {
        namespace {
            inline app::IHoldable__Array__Class* type_info_ref = nullptr;
        }
        inline app::IHoldable__Array__Class** type_info = &type_info_ref;
        inline app::IHoldable__Array__Class* get_class() {
            return il2cpp::get_class<app::IHoldable__Array__Class>(type_info, "", "IHoldable[]");
        }
        inline app::IHoldable__Array* create() {
            return il2cpp::create_object<app::IHoldable__Array>(get_class());
        }
    } // namespace IHoldable__Array
} // namespace app::classes::types
