#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/WebConnection__Array__Class.h>
#include <Modloader/app/structs/WebConnection__Array.h>

namespace app::classes::types {
    namespace WebConnection__Array {
        namespace {
            inline app::WebConnection__Array__Class* type_info_ref = nullptr;
        }
        inline app::WebConnection__Array__Class** type_info = &type_info_ref;
        inline app::WebConnection__Array__Class* get_class() {
            return il2cpp::get_class<app::WebConnection__Array__Class>(type_info, "System.Net", "WebConnection[]");
        }
        inline app::WebConnection__Array* create() {
            return il2cpp::create_object<app::WebConnection__Array>(get_class());
        }
    } // namespace WebConnection__Array
} // namespace app::classes::types
