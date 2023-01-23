#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UnmarshalledAttribute__Class.h>
#include <Modloader/app/structs/UnmarshalledAttribute.h>

namespace app::classes::types {
    namespace UnmarshalledAttribute {
        namespace {
            inline app::UnmarshalledAttribute__Class* type_info_ref = nullptr;
        }
        inline app::UnmarshalledAttribute__Class** type_info = &type_info_ref;
        inline app::UnmarshalledAttribute__Class* get_class() {
            return il2cpp::get_class<app::UnmarshalledAttribute__Class>(type_info, "UnityEngine.Bindings", "UnmarshalledAttribute");
        }
        inline app::UnmarshalledAttribute* create() {
            return il2cpp::create_object<app::UnmarshalledAttribute>(get_class());
        }
    } // namespace UnmarshalledAttribute
} // namespace app::classes::types
