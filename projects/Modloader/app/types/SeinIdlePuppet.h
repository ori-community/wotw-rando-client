#pragma once
#include <Modloader/app/structs/SeinIdlePuppet.h>
#include <Modloader/app/structs/SeinIdlePuppet__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinIdlePuppet {
        inline app::SeinIdlePuppet__Class** type_info() {
            static app::SeinIdlePuppet__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SeinIdlePuppet__Class**)(modloader::win::memory::resolve_rva(0x04720B18));
            }
            return cache;
        }
        inline app::SeinIdlePuppet__Class* get_class() {
            return il2cpp::get_class<app::SeinIdlePuppet__Class>(type_info(), "", "SeinIdlePuppet");
        }
        inline app::SeinIdlePuppet* create() {
            return il2cpp::create_object<app::SeinIdlePuppet>(get_class());
        }
    } // namespace SeinIdlePuppet
} // namespace app::classes::types
