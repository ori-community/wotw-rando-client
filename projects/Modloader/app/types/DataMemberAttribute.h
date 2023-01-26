#pragma once
#include <Modloader/app/structs/DataMemberAttribute.h>
#include <Modloader/app/structs/DataMemberAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DataMemberAttribute {
        inline app::DataMemberAttribute__Class** type_info() {
            static app::DataMemberAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DataMemberAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DataMemberAttribute__Class* get_class() {
            return il2cpp::get_class<app::DataMemberAttribute__Class>(type_info(), "System.Runtime.Serialization", "DataMemberAttribute");
        }
        inline app::DataMemberAttribute* create() {
            return il2cpp::create_object<app::DataMemberAttribute>(get_class());
        }
    } // namespace DataMemberAttribute
} // namespace app::classes::types
