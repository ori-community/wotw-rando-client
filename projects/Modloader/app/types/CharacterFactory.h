#pragma once
#include <Modloader/app/structs/CharacterFactory.h>
#include <Modloader/app/structs/CharacterFactory__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CharacterFactory {
        inline app::CharacterFactory__Class** type_info() {
            static app::CharacterFactory__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CharacterFactory__Class**)(modloader::win::memory::resolve_rva(0x047180F0));
            }
            return cache;
        }
        inline app::CharacterFactory__Class* get_class() {
            return il2cpp::get_class<app::CharacterFactory__Class>(type_info(), "", "CharacterFactory");
        }
        inline app::CharacterFactory* create() {
            return il2cpp::create_object<app::CharacterFactory>(get_class());
        }
    } // namespace CharacterFactory
} // namespace app::classes::types
