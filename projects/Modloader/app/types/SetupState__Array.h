#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SetupState__Array__Class.h>
#include <Modloader/app/structs/SetupState__Array.h>

namespace app::classes::types {
    namespace SetupState__Array {
        namespace {
            inline app::SetupState__Array__Class* type_info_ref = nullptr;
        }
        inline app::SetupState__Array__Class** type_info = &type_info_ref;
        inline app::SetupState__Array__Class* get_class() {
            return il2cpp::get_class<app::SetupState__Array__Class>(type_info, "", "SetupState[]");
        }
        inline app::SetupState__Array* create() {
            return il2cpp::create_object<app::SetupState__Array>(get_class());
        }
    } // namespace SetupState__Array
} // namespace app::classes::types
