#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/WebConnectionGroup_ConnectionState__Array__Class.h>
#include <Modloader/app/structs/WebConnectionGroup_ConnectionState__Array.h>

namespace app::classes::types {
    namespace WebConnectionGroup_ConnectionState__Array {
        namespace {
            inline app::WebConnectionGroup_ConnectionState__Array__Class* type_info_ref = nullptr;
        }
        inline app::WebConnectionGroup_ConnectionState__Array__Class** type_info = &type_info_ref;
        inline app::WebConnectionGroup_ConnectionState__Array__Class* get_class() {
            return il2cpp::get_class<app::WebConnectionGroup_ConnectionState__Array__Class>(type_info, "System.Net", "WebConnectionGroup+ConnectionState[]");
        }
        inline app::WebConnectionGroup_ConnectionState__Array* create() {
            return il2cpp::create_object<app::WebConnectionGroup_ConnectionState__Array>(get_class());
        }
    } // namespace WebConnectionGroup_ConnectionState__Array
} // namespace app::classes::types
