#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/JumpShootSharkPlaceholder__Array__Class.h>
#include <Modloader/app/structs/JumpShootSharkPlaceholder__Array.h>

namespace app::classes::types {
    namespace JumpShootSharkPlaceholder__Array {
        namespace {
            inline app::JumpShootSharkPlaceholder__Array__Class* type_info_ref = nullptr;
        }
        inline app::JumpShootSharkPlaceholder__Array__Class** type_info = &type_info_ref;
        inline app::JumpShootSharkPlaceholder__Array__Class* get_class() {
            return il2cpp::get_class<app::JumpShootSharkPlaceholder__Array__Class>(type_info, "", "JumpShootSharkPlaceholder[]");
        }
        inline app::JumpShootSharkPlaceholder__Array* create() {
            return il2cpp::create_object<app::JumpShootSharkPlaceholder__Array>(get_class());
        }
    } // namespace JumpShootSharkPlaceholder__Array
} // namespace app::classes::types
