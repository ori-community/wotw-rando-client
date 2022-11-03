#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RuntimeQuest__Array {
        namespace {
            inline app::RuntimeQuest__Array__Class* type_info_ref = nullptr;
        }
        inline app::RuntimeQuest__Array__Class** type_info = &type_info_ref;
        inline app::RuntimeQuest__Array__Class* get_class() {
            return il2cpp::get_class<app::RuntimeQuest__Array__Class>(type_info, "", "RuntimeQuest[]");
        }
        inline app::RuntimeQuest__Array* create() {
            return il2cpp::create_object<app::RuntimeQuest__Array>(get_class());
        }
    } // namespace RuntimeQuest__Array
} // namespace app::classes::types
