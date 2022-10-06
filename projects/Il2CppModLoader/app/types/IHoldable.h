#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IHoldable {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IHoldable__Class** type_info;
        inline app::IHoldable__Class* get_class() {
            return il2cpp::get_class<app::IHoldable__Class>(type_info, "", "IHoldable");
        }
        inline app::IHoldable__Array* create_array(int size) {
            return il2cpp::array_new<app::IHoldable__Array>(get_class(), size);
        }
        inline app::IHoldable__Array* create_array(const std::vector<app::IHoldable*>& items) {
            return il2cpp::array_new<app::IHoldable__Array>(get_class(), items);
        }
    } // namespace IHoldable
} // namespace app::classes::types
