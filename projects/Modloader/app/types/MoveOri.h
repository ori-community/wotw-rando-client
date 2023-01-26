#pragma once
#include <Modloader/app/structs/MoveOri.h>
#include <Modloader/app/structs/MoveOri__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoveOri {
        inline app::MoveOri__Class** type_info() {
            static app::MoveOri__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoveOri__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoveOri__Class* get_class() {
            return il2cpp::get_class<app::MoveOri__Class>(type_info(), "Moon", "MoveOri");
        }
        inline app::MoveOri* create() {
            return il2cpp::create_object<app::MoveOri>(get_class());
        }
    } // namespace MoveOri
} // namespace app::classes::types
