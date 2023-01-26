#pragma once
#include <Modloader/app/structs/SeinSwimmingPuppet.h>
#include <Modloader/app/structs/SeinSwimmingPuppet__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinSwimmingPuppet {
        inline app::SeinSwimmingPuppet__Class** type_info() {
            static app::SeinSwimmingPuppet__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SeinSwimmingPuppet__Class**)(modloader::win::memory::resolve_rva(0x047550A0));
            }
            return cache;
        }
        inline app::SeinSwimmingPuppet__Class* get_class() {
            return il2cpp::get_class<app::SeinSwimmingPuppet__Class>(type_info(), "", "SeinSwimmingPuppet");
        }
        inline app::SeinSwimmingPuppet* create() {
            return il2cpp::create_object<app::SeinSwimmingPuppet>(get_class());
        }
    } // namespace SeinSwimmingPuppet
} // namespace app::classes::types
