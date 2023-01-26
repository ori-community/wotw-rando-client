#pragma once
#include <Modloader/app/structs/IInstantiateObserver__Array.h>
#include <Modloader/app/structs/IInstantiateObserver__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IInstantiateObserver__Array {
        inline app::IInstantiateObserver__Array__Class** type_info() {
            static app::IInstantiateObserver__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IInstantiateObserver__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IInstantiateObserver__Array__Class* get_class() {
            return il2cpp::get_class<app::IInstantiateObserver__Array__Class>(type_info(), "", "IInstantiateObserver[]");
        }
        inline app::IInstantiateObserver__Array* create() {
            return il2cpp::create_object<app::IInstantiateObserver__Array>(get_class());
        }
    } // namespace IInstantiateObserver__Array
} // namespace app::classes::types
