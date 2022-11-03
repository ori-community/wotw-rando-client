#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinJump {
        namespace {
            inline app::SeinJump__Class* type_info_ref = nullptr;
        }
        inline app::SeinJump__Class** type_info = &type_info_ref;
        inline app::SeinJump__Class* get_class() {
            return il2cpp::get_class<app::SeinJump__Class>(type_info, "", "SeinJump");
        }
        inline app::SeinJump* create() {
            return il2cpp::create_object<app::SeinJump>(get_class());
        }
    } // namespace SeinJump
} // namespace app::classes::types
