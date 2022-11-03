#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace WebConnectionGroup__Array {
        namespace {
            inline app::WebConnectionGroup__Array__Class* type_info_ref = nullptr;
        }
        inline app::WebConnectionGroup__Array__Class** type_info = &type_info_ref;
        inline app::WebConnectionGroup__Array__Class* get_class() {
            return il2cpp::get_class<app::WebConnectionGroup__Array__Class>(type_info, "System.Net", "WebConnectionGroup[]");
        }
        inline app::WebConnectionGroup__Array* create() {
            return il2cpp::create_object<app::WebConnectionGroup__Array>(get_class());
        }
    } // namespace WebConnectionGroup__Array
} // namespace app::classes::types
