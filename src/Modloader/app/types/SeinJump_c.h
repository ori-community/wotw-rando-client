#pragma once
#include <Modloader/app/structs/SeinJump_c.h>
#include <Modloader/app/structs/SeinJump_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinJump_c {
        inline app::SeinJump_c__Class** type_info() {
            static app::SeinJump_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SeinJump_c__Class**)(modloader::win::memory::resolve_rva(0x047945B0));
            }
            return cache;
        }
        inline app::SeinJump_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinJump_c__Class>(type_info(), "", "SeinJump", "<>c");
        }
        inline app::SeinJump_c* create() {
            return il2cpp::create_object<app::SeinJump_c>(get_class());
        }
    } // namespace SeinJump_c
} // namespace app::classes::types
