#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DataContractAttribute {
        namespace {
            app::DataContractAttribute__Class* type_info_ref = nullptr;
        }
        app::DataContractAttribute__Class** type_info = &type_info_ref;
        inline app::DataContractAttribute__Class* get_class() {
            return il2cpp::get_class<app::DataContractAttribute__Class>(type_info, "System.Runtime.Serialization", "DataContractAttribute");
        }
        inline app::DataContractAttribute* create() {
            return il2cpp::create_object<app::DataContractAttribute>(get_class());
        }
    } // namespace DataContractAttribute
} // namespace app::classes::types
