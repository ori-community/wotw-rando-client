#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LockOnTarget__Array__Class.h>
#include <Modloader/app/structs/LockOnTarget__Array.h>

namespace app::classes::types {
    namespace LockOnTarget__Array {
        namespace {
            inline app::LockOnTarget__Array__Class* type_info_ref = nullptr;
        }
        inline app::LockOnTarget__Array__Class** type_info = &type_info_ref;
        inline app::LockOnTarget__Array__Class* get_class() {
            return il2cpp::get_class<app::LockOnTarget__Array__Class>(type_info, "", "LockOnTarget[]");
        }
        inline app::LockOnTarget__Array* create() {
            return il2cpp::create_object<app::LockOnTarget__Array>(get_class());
        }
    } // namespace LockOnTarget__Array
} // namespace app::classes::types
