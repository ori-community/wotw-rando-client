#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/JointState__Array__Class.h>
#include <Modloader/app/structs/JointState__Array.h>

namespace app::classes::types {
    namespace JointState__Array {
        namespace {
            inline app::JointState__Array__Class* type_info_ref = nullptr;
        }
        inline app::JointState__Array__Class** type_info = &type_info_ref;
        inline app::JointState__Array__Class* get_class() {
            return il2cpp::get_class<app::JointState__Array__Class>(type_info, "", "JointState[]");
        }
        inline app::JointState__Array* create() {
            return il2cpp::create_object<app::JointState__Array>(get_class());
        }
    } // namespace JointState__Array
} // namespace app::classes::types
