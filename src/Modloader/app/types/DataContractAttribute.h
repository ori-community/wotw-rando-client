#pragma once
#include <Modloader/app/structs/DataContractAttribute.h>
#include <Modloader/app/structs/DataContractAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DataContractAttribute {
        inline app::DataContractAttribute__Class** type_info() {
            static app::DataContractAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DataContractAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DataContractAttribute__Class* get_class() {
            return il2cpp::get_class<app::DataContractAttribute__Class>(type_info(), "System.Runtime.Serialization", "DataContractAttribute");
        }
        inline app::DataContractAttribute* create() {
            return il2cpp::create_object<app::DataContractAttribute>(get_class());
        }
    } // namespace DataContractAttribute
} // namespace app::classes::types
