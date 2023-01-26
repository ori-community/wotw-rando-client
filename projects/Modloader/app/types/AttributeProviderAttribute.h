#pragma once
#include <Modloader/app/structs/AttributeProviderAttribute.h>
#include <Modloader/app/structs/AttributeProviderAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AttributeProviderAttribute {
        inline app::AttributeProviderAttribute__Class** type_info() {
            static app::AttributeProviderAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AttributeProviderAttribute__Class**)(modloader::win::memory::resolve_rva(0x04716158));
            }
            return cache;
        }
        inline app::AttributeProviderAttribute__Class* get_class() {
            return il2cpp::get_class<app::AttributeProviderAttribute__Class>(type_info(), "System.ComponentModel", "AttributeProviderAttribute");
        }
        inline app::AttributeProviderAttribute* create() {
            return il2cpp::create_object<app::AttributeProviderAttribute>(get_class());
        }
    } // namespace AttributeProviderAttribute
} // namespace app::classes::types
