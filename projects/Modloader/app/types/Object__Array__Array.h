#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Object__Array__Array__Class.h>
#include <Modloader/app/structs/Object__Array__Array.h>

namespace app::classes::types {
    namespace Object__Array__Array {
        namespace {
            inline app::Object__Array__Array__Class* type_info_ref = nullptr;
        }
        inline app::Object__Array__Array__Class** type_info = &type_info_ref;
        inline app::Object__Array__Array__Class* get_class() {
            return il2cpp::get_class<app::Object__Array__Array__Class>(type_info, "System", "Object[][]");
        }
        inline app::Object__Array__Array* create() {
            return il2cpp::create_object<app::Object__Array__Array>(get_class());
        }
    } // namespace Object__Array__Array
} // namespace app::classes::types
