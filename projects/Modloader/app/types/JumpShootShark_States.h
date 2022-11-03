#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace JumpShootShark_States {
        inline app::JumpShootShark_States__Class** type_info = (app::JumpShootShark_States__Class**)(modloader::win::memory::resolve_rva(0x04741FB8));
        inline app::JumpShootShark_States__Class* get_class() {
            return il2cpp::get_nested_class<app::JumpShootShark_States__Class>(type_info, "", "JumpShootShark", "States");
        }
        inline app::JumpShootShark_States* create() {
            return il2cpp::create_object<app::JumpShootShark_States>(get_class());
        }
    } // namespace JumpShootShark_States
} // namespace app::classes::types
