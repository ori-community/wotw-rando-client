#pragma once
#include <Modloader/app/structs/SeinCharacter.h>
#include <Modloader/app/structs/SeinCharacter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinCharacter {
        inline app::SeinCharacter__Class** type_info() {
            static app::SeinCharacter__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SeinCharacter__Class**)(modloader::win::memory::resolve_rva(0x04738A08));
            }
            return cache;
        }
        inline app::SeinCharacter__Class* get_class() {
            return il2cpp::get_class<app::SeinCharacter__Class>(type_info(), "", "SeinCharacter");
        }
        inline app::SeinCharacter* create() {
            return il2cpp::create_object<app::SeinCharacter>(get_class());
        }
    } // namespace SeinCharacter
} // namespace app::classes::types
