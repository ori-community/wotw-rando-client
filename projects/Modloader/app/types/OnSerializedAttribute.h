#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/OnSerializedAttribute__Class.h>
#include <Modloader/app/structs/OnSerializedAttribute.h>

namespace app::classes::types {
    namespace OnSerializedAttribute {
        namespace {
            inline app::OnSerializedAttribute__Class* type_info_ref = nullptr;
        }
        inline app::OnSerializedAttribute__Class** type_info = &type_info_ref;
        inline app::OnSerializedAttribute__Class* get_class() {
            return il2cpp::get_class<app::OnSerializedAttribute__Class>(type_info, "System.Runtime.Serialization", "OnSerializedAttribute");
        }
        inline app::OnSerializedAttribute* create() {
            return il2cpp::create_object<app::OnSerializedAttribute>(get_class());
        }
    } // namespace OnSerializedAttribute
} // namespace app::classes::types
