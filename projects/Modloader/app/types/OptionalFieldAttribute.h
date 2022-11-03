#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace OptionalFieldAttribute {
        namespace {
            inline app::OptionalFieldAttribute__Class* type_info_ref = nullptr;
        }
        inline app::OptionalFieldAttribute__Class** type_info = &type_info_ref;
        inline app::OptionalFieldAttribute__Class* get_class() {
            return il2cpp::get_class<app::OptionalFieldAttribute__Class>(type_info, "System.Runtime.Serialization", "OptionalFieldAttribute");
        }
        inline app::OptionalFieldAttribute* create() {
            return il2cpp::create_object<app::OptionalFieldAttribute>(get_class());
        }
    } // namespace OptionalFieldAttribute
} // namespace app::classes::types
