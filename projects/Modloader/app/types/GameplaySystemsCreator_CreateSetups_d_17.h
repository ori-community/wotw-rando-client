#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GameplaySystemsCreator_CreateSetups_d_17__Class.h>
#include <Modloader/app/structs/GameplaySystemsCreator_CreateSetups_d_17.h>

namespace app::classes::types {
    namespace GameplaySystemsCreator_CreateSetups_d_17 {
        inline app::GameplaySystemsCreator_CreateSetups_d_17__Class** type_info = (app::GameplaySystemsCreator_CreateSetups_d_17__Class**)(modloader::win::memory::resolve_rva(0x0473C090));
        inline app::GameplaySystemsCreator_CreateSetups_d_17__Class* get_class() {
            return il2cpp::get_nested_class<app::GameplaySystemsCreator_CreateSetups_d_17__Class>(type_info, "", "GameplaySystemsCreator", "<CreateSetups>d__17");
        }
        inline app::GameplaySystemsCreator_CreateSetups_d_17* create() {
            return il2cpp::create_object<app::GameplaySystemsCreator_CreateSetups_d_17>(get_class());
        }
    } // namespace GameplaySystemsCreator_CreateSetups_d_17
} // namespace app::classes::types
