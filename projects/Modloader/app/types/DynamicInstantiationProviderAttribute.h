#pragma once
#include <Modloader/app/structs/DynamicInstantiationProviderAttribute.h>
#include <Modloader/app/structs/DynamicInstantiationProviderAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DynamicInstantiationProviderAttribute {
        inline app::DynamicInstantiationProviderAttribute__Class** type_info() {
            static app::DynamicInstantiationProviderAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DynamicInstantiationProviderAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DynamicInstantiationProviderAttribute__Class* get_class() {
            return il2cpp::get_class<app::DynamicInstantiationProviderAttribute__Class>(type_info(), "", "DynamicInstantiationProviderAttribute");
        }
        inline app::DynamicInstantiationProviderAttribute* create() {
            return il2cpp::create_object<app::DynamicInstantiationProviderAttribute>(get_class());
        }
    } // namespace DynamicInstantiationProviderAttribute
} // namespace app::classes::types
