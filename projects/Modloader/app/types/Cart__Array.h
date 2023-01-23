#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Cart__Array__Class.h>
#include <Modloader/app/structs/Cart__Array.h>

namespace app::classes::types {
    namespace Cart__Array {
        namespace {
            inline app::Cart__Array__Class* type_info_ref = nullptr;
        }
        inline app::Cart__Array__Class** type_info = &type_info_ref;
        inline app::Cart__Array__Class* get_class() {
            return il2cpp::get_class<app::Cart__Array__Class>(type_info, "", "Cart[]");
        }
        inline app::Cart__Array* create() {
            return il2cpp::create_object<app::Cart__Array>(get_class());
        }
    } // namespace Cart__Array
} // namespace app::classes::types
