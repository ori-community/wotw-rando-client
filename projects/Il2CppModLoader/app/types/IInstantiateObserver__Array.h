#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IInstantiateObserver__Array {
        namespace {
            app::IInstantiateObserver__Array__Class* type_info_ref = nullptr;
        }
        app::IInstantiateObserver__Array__Class** type_info = &type_info_ref;
        inline app::IInstantiateObserver__Array__Class* get_class() {
            return il2cpp::get_class<app::IInstantiateObserver__Array__Class>(type_info, "", "IInstantiateObserver[]");
        }
        inline app::IInstantiateObserver__Array* create() {
            return il2cpp::create_object<app::IInstantiateObserver__Array>(get_class());
        }
    } // namespace IInstantiateObserver__Array
} // namespace app::classes::types
