#pragma once
#include <Modloader/app/structs/GameFolders.h>
#include <Modloader/app/structs/GameFolders__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GameFolders {
        inline app::GameFolders__Class** type_info() {
            static app::GameFolders__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GameFolders__Class**)(modloader::win::memory::resolve_rva(0x0474BB48));
            }
            return cache;
        }
        inline app::GameFolders__Class* get_class() {
            return il2cpp::get_class<app::GameFolders__Class>(type_info(), "Moon", "GameFolders");
        }
        inline app::GameFolders* create() {
            return il2cpp::create_object<app::GameFolders>(get_class());
        }
    } // namespace GameFolders
} // namespace app::classes::types
