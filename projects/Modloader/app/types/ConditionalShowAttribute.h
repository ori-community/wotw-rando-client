#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ConditionalShowAttribute {
        namespace {
            inline app::ConditionalShowAttribute__Class* type_info_ref = nullptr;
        }
        inline app::ConditionalShowAttribute__Class** type_info = &type_info_ref;
        inline app::ConditionalShowAttribute__Class* get_class() {
            return il2cpp::get_class<app::ConditionalShowAttribute__Class>(type_info, "", "ConditionalShowAttribute");
        }
        inline app::ConditionalShowAttribute* create() {
            return il2cpp::create_object<app::ConditionalShowAttribute>(get_class());
        }
    } // namespace ConditionalShowAttribute
} // namespace app::classes::types
