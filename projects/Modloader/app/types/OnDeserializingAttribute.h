#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/OnDeserializingAttribute__Class.h>
#include <Modloader/app/structs/OnDeserializingAttribute.h>

namespace app::classes::types {
    namespace OnDeserializingAttribute {
        namespace {
            inline app::OnDeserializingAttribute__Class* type_info_ref = nullptr;
        }
        inline app::OnDeserializingAttribute__Class** type_info = &type_info_ref;
        inline app::OnDeserializingAttribute__Class* get_class() {
            return il2cpp::get_class<app::OnDeserializingAttribute__Class>(type_info, "System.Runtime.Serialization", "OnDeserializingAttribute");
        }
        inline app::OnDeserializingAttribute* create() {
            return il2cpp::create_object<app::OnDeserializingAttribute>(get_class());
        }
    } // namespace OnDeserializingAttribute
} // namespace app::classes::types
