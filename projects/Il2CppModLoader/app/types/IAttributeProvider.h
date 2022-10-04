#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IAttributeProvider {
        namespace {
            app::IAttributeProvider__Class* type_info_ref = nullptr;
        }
        app::IAttributeProvider__Class** type_info = &type_info_ref;
        inline app::IAttributeProvider__Class* get_class() {
            return il2cpp::get_class<app::IAttributeProvider__Class>(type_info, "Newtonsoft.Json.Serialization", "IAttributeProvider");
        }
        inline app::IAttributeProvider* create() {
            return il2cpp::create_object<app::IAttributeProvider>(get_class());
        }
    } // namespace IAttributeProvider
} // namespace app::classes::types
