#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GameplaySystemsCreator {
        inline app::GameplaySystemsCreator__Class** type_info = (app::GameplaySystemsCreator__Class**)(modloader::win::memory::resolve_rva(0x04791D80));
        inline app::GameplaySystemsCreator__Class* get_class() {
            return il2cpp::get_class<app::GameplaySystemsCreator__Class>(type_info, "", "GameplaySystemsCreator");
        }
        inline app::GameplaySystemsCreator* create() {
            return il2cpp::create_object<app::GameplaySystemsCreator>(get_class());
        }
    } // namespace GameplaySystemsCreator
} // namespace app::classes::types
