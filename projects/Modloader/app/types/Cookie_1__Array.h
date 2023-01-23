#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Cookie_1__Array__Class.h>
#include <Modloader/app/structs/Cookie_1__Array.h>

namespace app::classes::types {
    namespace Cookie_1__Array {
        namespace {
            inline app::Cookie_1__Array__Class* type_info_ref = nullptr;
        }
        inline app::Cookie_1__Array__Class** type_info = &type_info_ref;
        inline app::Cookie_1__Array__Class* get_class() {
            return il2cpp::get_class<app::Cookie_1__Array__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "Cookie[]");
        }
        inline app::Cookie_1__Array* create() {
            return il2cpp::create_object<app::Cookie_1__Array>(get_class());
        }
    } // namespace Cookie_1__Array
} // namespace app::classes::types
