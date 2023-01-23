#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ConditionalFieldAttribute__Class.h>
#include <Modloader/app/structs/ConditionalFieldAttribute.h>

namespace app::classes::types {
    namespace ConditionalFieldAttribute {
        namespace {
            inline app::ConditionalFieldAttribute__Class* type_info_ref = nullptr;
        }
        inline app::ConditionalFieldAttribute__Class** type_info = &type_info_ref;
        inline app::ConditionalFieldAttribute__Class* get_class() {
            return il2cpp::get_class<app::ConditionalFieldAttribute__Class>(type_info, "", "ConditionalFieldAttribute");
        }
        inline app::ConditionalFieldAttribute* create() {
            return il2cpp::create_object<app::ConditionalFieldAttribute>(get_class());
        }
    } // namespace ConditionalFieldAttribute
} // namespace app::classes::types
