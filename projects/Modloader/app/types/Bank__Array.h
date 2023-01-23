#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Bank__Array__Class.h>
#include <Modloader/app/structs/Bank__Array.h>

namespace app::classes::types {
    namespace Bank__Array {
        namespace {
            inline app::Bank__Array__Class* type_info_ref = nullptr;
        }
        inline app::Bank__Array__Class** type_info = &type_info_ref;
        inline app::Bank__Array__Class* get_class() {
            return il2cpp::get_class<app::Bank__Array__Class>(type_info, "AK.Wwise", "Bank[]");
        }
        inline app::Bank__Array* create() {
            return il2cpp::create_object<app::Bank__Array>(get_class());
        }
    } // namespace Bank__Array
} // namespace app::classes::types
