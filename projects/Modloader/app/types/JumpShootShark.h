#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/JumpShootShark__Class.h>
#include <Modloader/app/structs/JumpShootShark.h>
#include <Modloader/app/structs/JumpShootShark__Array.h>

namespace app::classes::types {
    namespace JumpShootShark {
        inline app::JumpShootShark__Class** type_info = (app::JumpShootShark__Class**)(modloader::win::memory::resolve_rva(0x047685A0));
        inline app::JumpShootShark__Class* get_class() {
            return il2cpp::get_class<app::JumpShootShark__Class>(type_info, "", "JumpShootShark");
        }
        inline app::JumpShootShark* create() {
            return il2cpp::create_object<app::JumpShootShark>(get_class());
        }
        inline app::JumpShootShark__Array* create_array(int size) {
            return il2cpp::array_new<app::JumpShootShark__Array>(get_class(), size);
        }
        inline app::JumpShootShark__Array* create_array(const std::vector<app::JumpShootShark*>& items) {
            return il2cpp::array_new<app::JumpShootShark__Array>(get_class(), items);
        }
    } // namespace JumpShootShark
} // namespace app::classes::types
