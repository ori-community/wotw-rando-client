#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Func_1_Boolean___Array__Class.h>
#include <Modloader/app/structs/Func_1_Boolean___Array.h>

namespace app::classes::types {
    namespace Func_1_Boolean___Array {
        namespace {
            inline app::Func_1_Boolean___Array__Class* type_info_ref = nullptr;
        }
        inline app::Func_1_Boolean___Array__Class** type_info = &type_info_ref;
        inline app::Func_1_Boolean___Array__Class* get_class() {
            return il2cpp::get_class<app::Func_1_Boolean___Array__Class>(type_info, "System", "Func`1[Boolean][]");
        }
        inline app::Func_1_Boolean___Array* create() {
            return il2cpp::create_object<app::Func_1_Boolean___Array>(get_class());
        }
    } // namespace Func_1_Boolean___Array
} // namespace app::classes::types
