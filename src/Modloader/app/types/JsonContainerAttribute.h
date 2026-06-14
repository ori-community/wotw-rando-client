#pragma once
#include <Modloader/app/structs/JsonContainerAttribute.h>
#include <Modloader/app/structs/JsonContainerAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JsonContainerAttribute {
        inline app::JsonContainerAttribute__Class** type_info() {
            static app::JsonContainerAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::JsonContainerAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::JsonContainerAttribute__Class* get_class() {
            return il2cpp::get_class<app::JsonContainerAttribute__Class>(type_info(), "Newtonsoft.Json", "JsonContainerAttribute");
        }
        inline app::JsonContainerAttribute* create() {
            return il2cpp::create_object<app::JsonContainerAttribute>(get_class());
        }
    } // namespace JsonContainerAttribute
} // namespace app::classes::types
