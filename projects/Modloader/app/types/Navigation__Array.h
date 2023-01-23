#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Navigation__Array__Class.h>
#include <Modloader/app/structs/Navigation__Array.h>

namespace app::classes::types {
    namespace Navigation__Array {
        namespace {
            inline app::Navigation__Array__Class* type_info_ref = nullptr;
        }
        inline app::Navigation__Array__Class** type_info = &type_info_ref;
        inline app::Navigation__Array__Class* get_class() {
            return il2cpp::get_class<app::Navigation__Array__Class>(type_info, "UnityEngine.UI", "Navigation[]");
        }
        inline app::Navigation__Array* create() {
            return il2cpp::create_object<app::Navigation__Array>(get_class());
        }
    } // namespace Navigation__Array
} // namespace app::classes::types
