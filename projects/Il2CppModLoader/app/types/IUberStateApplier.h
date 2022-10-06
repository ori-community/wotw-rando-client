#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IUberStateApplier {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IUberStateApplier__Class** type_info;
        inline app::IUberStateApplier__Class* get_class() {
            return il2cpp::get_class<app::IUberStateApplier__Class>(type_info, "Moon", "IUberStateApplier");
        }
        inline app::IUberStateApplier__Array* create_array(int size) {
            return il2cpp::array_new<app::IUberStateApplier__Array>(get_class(), size);
        }
        inline app::IUberStateApplier__Array* create_array(const std::vector<app::IUberStateApplier*>& items) {
            return il2cpp::array_new<app::IUberStateApplier__Array>(get_class(), items);
        }
    } // namespace IUberStateApplier
} // namespace app::classes::types
