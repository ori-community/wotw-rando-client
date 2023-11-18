#pragma once
#include <Modloader/app/structs/MothEnemy.h>
#include <Modloader/app/structs/MothEnemy__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MothEnemy {
        inline app::MothEnemy__Class** type_info() {
            static app::MothEnemy__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MothEnemy__Class**)(modloader::win::memory::resolve_rva(0x0472BD10));
            }
            return cache;
        }
        inline app::MothEnemy__Class* get_class() {
            return il2cpp::get_class<app::MothEnemy__Class>(type_info(), "", "MothEnemy");
        }
        inline app::MothEnemy* create() {
            return il2cpp::create_object<app::MothEnemy>(get_class());
        }
    } // namespace MothEnemy
} // namespace app::classes::types
