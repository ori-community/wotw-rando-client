#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DataMemberAttribute__Class.h>
#include <Modloader/app/structs/DataMemberAttribute.h>

namespace app::classes::types {
    namespace DataMemberAttribute {
        namespace {
            inline app::DataMemberAttribute__Class* type_info_ref = nullptr;
        }
        inline app::DataMemberAttribute__Class** type_info = &type_info_ref;
        inline app::DataMemberAttribute__Class* get_class() {
            return il2cpp::get_class<app::DataMemberAttribute__Class>(type_info, "System.Runtime.Serialization", "DataMemberAttribute");
        }
        inline app::DataMemberAttribute* create() {
            return il2cpp::create_object<app::DataMemberAttribute>(get_class());
        }
    } // namespace DataMemberAttribute
} // namespace app::classes::types
