#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IInstantiateObserver {
        namespace {
            app::IInstantiateObserver__Class* type_info_ref = nullptr;
        }
        app::IInstantiateObserver__Class** type_info = &type_info_ref;
        inline app::IInstantiateObserver__Class* get_class() {
            return il2cpp::get_class<app::IInstantiateObserver__Class>(type_info, "", "IInstantiateObserver");
        }
        inline app::IInstantiateObserver__Array* create_array(int size) {
            return il2cpp::array_new<app::IInstantiateObserver__Array>(get_class(), size);
        }
        inline app::IInstantiateObserver__Array* create_array(const std::vector<app::IInstantiateObserver*>& items) {
            return il2cpp::array_new<app::IInstantiateObserver__Array>(get_class(), items);
        }
    } // namespace IInstantiateObserver
} // namespace app::classes::types
