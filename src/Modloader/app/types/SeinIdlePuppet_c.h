#pragma once
#include <Modloader/app/structs/SeinIdlePuppet_c.h>
#include <Modloader/app/structs/SeinIdlePuppet_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinIdlePuppet_c {
        inline app::SeinIdlePuppet_c__Class** type_info() {
            static app::SeinIdlePuppet_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SeinIdlePuppet_c__Class**)(modloader::win::memory::resolve_rva(0x04717E50));
            }
            return cache;
        }
        inline app::SeinIdlePuppet_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinIdlePuppet_c__Class>(type_info(), "", "SeinIdlePuppet", "<>c");
        }
        inline app::SeinIdlePuppet_c* create() {
            return il2cpp::create_object<app::SeinIdlePuppet_c>(get_class());
        }
    } // namespace SeinIdlePuppet_c
} // namespace app::classes::types
