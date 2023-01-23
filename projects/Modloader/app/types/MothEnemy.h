#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MothEnemy__Class.h>
#include <Modloader/app/structs/MothEnemy.h>

namespace app::classes::types {
    namespace MothEnemy {
        inline app::MothEnemy__Class** type_info = (app::MothEnemy__Class**)(modloader::win::memory::resolve_rva(0x0472BD10));
        inline app::MothEnemy__Class* get_class() {
            return il2cpp::get_class<app::MothEnemy__Class>(type_info, "", "MothEnemy");
        }
        inline app::MothEnemy* create() {
            return il2cpp::create_object<app::MothEnemy>(get_class());
        }
    } // namespace MothEnemy
} // namespace app::classes::types
