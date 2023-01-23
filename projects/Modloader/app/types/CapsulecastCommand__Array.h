#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CapsulecastCommand__Array__Class.h>
#include <Modloader/app/structs/CapsulecastCommand__Array.h>

namespace app::classes::types {
    namespace CapsulecastCommand__Array {
        namespace {
            inline app::CapsulecastCommand__Array__Class* type_info_ref = nullptr;
        }
        inline app::CapsulecastCommand__Array__Class** type_info = &type_info_ref;
        inline app::CapsulecastCommand__Array__Class* get_class() {
            return il2cpp::get_class<app::CapsulecastCommand__Array__Class>(type_info, "UnityEngine", "CapsulecastCommand[]");
        }
        inline app::CapsulecastCommand__Array* create() {
            return il2cpp::create_object<app::CapsulecastCommand__Array>(get_class());
        }
    } // namespace CapsulecastCommand__Array
} // namespace app::classes::types
