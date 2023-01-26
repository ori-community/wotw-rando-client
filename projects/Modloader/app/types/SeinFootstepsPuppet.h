#pragma once
#include <Modloader/app/structs/SeinFootstepsPuppet.h>
#include <Modloader/app/structs/SeinFootstepsPuppet__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinFootstepsPuppet {
        inline app::SeinFootstepsPuppet__Class** type_info() {
            static app::SeinFootstepsPuppet__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SeinFootstepsPuppet__Class**)(modloader::win::memory::resolve_rva(0x04709918));
            }
            return cache;
        }
        inline app::SeinFootstepsPuppet__Class* get_class() {
            return il2cpp::get_class<app::SeinFootstepsPuppet__Class>(type_info(), "", "SeinFootstepsPuppet");
        }
        inline app::SeinFootstepsPuppet* create() {
            return il2cpp::create_object<app::SeinFootstepsPuppet>(get_class());
        }
    } // namespace SeinFootstepsPuppet
} // namespace app::classes::types
