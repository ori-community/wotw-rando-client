#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DeathWisp__Array__Class.h>
#include <Modloader/app/structs/DeathWisp__Array.h>

namespace app::classes::types {
    namespace DeathWisp__Array {
        namespace {
            inline app::DeathWisp__Array__Class* type_info_ref = nullptr;
        }
        inline app::DeathWisp__Array__Class** type_info = &type_info_ref;
        inline app::DeathWisp__Array__Class* get_class() {
            return il2cpp::get_class<app::DeathWisp__Array__Class>(type_info, "", "DeathWisp[]");
        }
        inline app::DeathWisp__Array* create() {
            return il2cpp::create_object<app::DeathWisp__Array>(get_class());
        }
    } // namespace DeathWisp__Array
} // namespace app::classes::types
