#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IDrivable__Array__Class.h>
#include <Modloader/app/structs/IDrivable__Array.h>

namespace app::classes::types {
    namespace IDrivable__Array {
        namespace {
            inline app::IDrivable__Array__Class* type_info_ref = nullptr;
        }
        inline app::IDrivable__Array__Class** type_info = &type_info_ref;
        inline app::IDrivable__Array__Class* get_class() {
            return il2cpp::get_class<app::IDrivable__Array__Class>(type_info, "Moon", "IDrivable[]");
        }
        inline app::IDrivable__Array* create() {
            return il2cpp::create_object<app::IDrivable__Array>(get_class());
        }
    } // namespace IDrivable__Array
} // namespace app::classes::types
