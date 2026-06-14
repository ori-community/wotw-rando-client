#pragma once
#include <Modloader/app/structs/ICharacter.h>
#include <Modloader/app/structs/ICharacter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ICharacter {
        inline app::ICharacter__Class** type_info() {
            static app::ICharacter__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ICharacter__Class**)(modloader::win::memory::resolve_rva(0x047147F0));
            }
            return cache;
        }
        inline app::ICharacter__Class* get_class() {
            return il2cpp::get_class<app::ICharacter__Class>(type_info(), "", "ICharacter");
        }
    } // namespace ICharacter
} // namespace app::classes::types
