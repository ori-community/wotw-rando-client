#pragma once
#include <Modloader/app/structs/CharacterFactory_Characters__Enum.h>
#include <Modloader/app/structs/CharacterFactory_Characters__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CharacterFactory_Characters__Enum {
        inline app::CharacterFactory_Characters__Enum__Class** type_info() {
            static app::CharacterFactory_Characters__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CharacterFactory_Characters__Enum__Class**)(modloader::win::memory::resolve_rva(0x04772538));
            }
            return cache;
        }
        inline app::CharacterFactory_Characters__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::CharacterFactory_Characters__Enum__Class>(type_info(), "", "CharacterFactory", "Characters");
        }
        inline app::CharacterFactory_Characters__Enum* create() {
            return il2cpp::create_object<app::CharacterFactory_Characters__Enum>(get_class());
        }
    } // namespace CharacterFactory_Characters__Enum
} // namespace app::classes::types
