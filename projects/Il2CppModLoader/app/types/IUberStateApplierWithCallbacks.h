#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IUberStateApplierWithCallbacks {
        inline app::IUberStateApplierWithCallbacks__Class** type_info = (app::IUberStateApplierWithCallbacks__Class**)(modloader::win::memory::resolve_rva(0x047639B0));
        inline app::IUberStateApplierWithCallbacks__Class* get_class() {
            return il2cpp::get_class<app::IUberStateApplierWithCallbacks__Class>(type_info, "Moon", "IUberStateApplierWithCallbacks");
        }
        inline app::IUberStateApplierWithCallbacks__Array* create_array(int size) {
            return il2cpp::array_new<app::IUberStateApplierWithCallbacks__Array>(get_class(), size);
        }
        inline app::IUberStateApplierWithCallbacks__Array* create_array(const std::vector<app::IUberStateApplierWithCallbacks*>& items) {
            return il2cpp::array_new<app::IUberStateApplierWithCallbacks__Array>(get_class(), items);
        }
    } // namespace IUberStateApplierWithCallbacks
} // namespace app::classes::types
