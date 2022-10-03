#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace JsonContainerAttribute {
        namespace {
            app::JsonContainerAttribute__Class* type_info_ref = nullptr;
        }
        app::JsonContainerAttribute__Class** type_info = &type_info_ref;
        inline app::JsonContainerAttribute__Class* get_class() {
            return il2cpp::get_class<app::JsonContainerAttribute__Class>(type_info, "Newtonsoft.Json", "JsonContainerAttribute");
        }
        inline app::JsonContainerAttribute* create() {
            return il2cpp::create_object<app::JsonContainerAttribute>(get_class());
        }
    } // namespace JsonContainerAttribute
} // namespace app::classes::types
