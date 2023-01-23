#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/OnSerializingAttribute__Class.h>
#include <Modloader/app/structs/OnSerializingAttribute.h>

namespace app::classes::types {
    namespace OnSerializingAttribute {
        namespace {
            inline app::OnSerializingAttribute__Class* type_info_ref = nullptr;
        }
        inline app::OnSerializingAttribute__Class** type_info = &type_info_ref;
        inline app::OnSerializingAttribute__Class* get_class() {
            return il2cpp::get_class<app::OnSerializingAttribute__Class>(type_info, "System.Runtime.Serialization", "OnSerializingAttribute");
        }
        inline app::OnSerializingAttribute* create() {
            return il2cpp::create_object<app::OnSerializingAttribute>(get_class());
        }
    } // namespace OnSerializingAttribute
} // namespace app::classes::types
