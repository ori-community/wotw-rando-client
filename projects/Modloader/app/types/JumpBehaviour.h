#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/JumpBehaviour__Class.h>
#include <Modloader/app/structs/JumpBehaviour.h>

namespace app::classes::types {
    namespace JumpBehaviour {
        namespace {
            inline app::JumpBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::JumpBehaviour__Class** type_info = &type_info_ref;
        inline app::JumpBehaviour__Class* get_class() {
            return il2cpp::get_class<app::JumpBehaviour__Class>(type_info, "", "JumpBehaviour");
        }
        inline app::JumpBehaviour* create() {
            return il2cpp::create_object<app::JumpBehaviour>(get_class());
        }
    } // namespace JumpBehaviour
} // namespace app::classes::types
