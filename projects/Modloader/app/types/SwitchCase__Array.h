#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SwitchCase__Array__Class.h>
#include <Modloader/app/structs/SwitchCase__Array.h>

namespace app::classes::types {
    namespace SwitchCase__Array {
        namespace {
            inline app::SwitchCase__Array__Class* type_info_ref = nullptr;
        }
        inline app::SwitchCase__Array__Class** type_info = &type_info_ref;
        inline app::SwitchCase__Array__Class* get_class() {
            return il2cpp::get_class<app::SwitchCase__Array__Class>(type_info, "System.Linq.Expressions", "SwitchCase[]");
        }
        inline app::SwitchCase__Array* create() {
            return il2cpp::create_object<app::SwitchCase__Array>(get_class());
        }
    } // namespace SwitchCase__Array
} // namespace app::classes::types
