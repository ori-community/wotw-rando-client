#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/JumpShootShark__Array__Class.h>
#include <Modloader/app/structs/JumpShootShark__Array.h>

namespace app::classes::types {
    namespace JumpShootShark__Array {
        namespace {
            inline app::JumpShootShark__Array__Class* type_info_ref = nullptr;
        }
        inline app::JumpShootShark__Array__Class** type_info = &type_info_ref;
        inline app::JumpShootShark__Array__Class* get_class() {
            return il2cpp::get_class<app::JumpShootShark__Array__Class>(type_info, "", "JumpShootShark[]");
        }
        inline app::JumpShootShark__Array* create() {
            return il2cpp::create_object<app::JumpShootShark__Array>(get_class());
        }
    } // namespace JumpShootShark__Array
} // namespace app::classes::types
