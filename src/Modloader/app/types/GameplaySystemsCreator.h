#pragma once
#include <Modloader/app/structs/GameplaySystemsCreator.h>
#include <Modloader/app/structs/GameplaySystemsCreator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GameplaySystemsCreator {
        inline app::GameplaySystemsCreator__Class** type_info() {
            static app::GameplaySystemsCreator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GameplaySystemsCreator__Class**)(modloader::win::memory::resolve_rva(0x04791D80));
            }
            return cache;
        }
        inline app::GameplaySystemsCreator__Class* get_class() {
            return il2cpp::get_class<app::GameplaySystemsCreator__Class>(type_info(), "", "GameplaySystemsCreator");
        }
        inline app::GameplaySystemsCreator* create() {
            return il2cpp::create_object<app::GameplaySystemsCreator>(get_class());
        }
    } // namespace GameplaySystemsCreator
} // namespace app::classes::types
