#pragma once
#include <Modloader/app/structs/SeinComboMoves.h>
#include <Modloader/app/structs/SeinComboMoves__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinComboMoves {
        inline app::SeinComboMoves__Class** type_info() {
            static app::SeinComboMoves__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinComboMoves__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinComboMoves__Class* get_class() {
            return il2cpp::get_class<app::SeinComboMoves__Class>(type_info(), "", "SeinComboMoves");
        }
        inline app::SeinComboMoves* create() {
            return il2cpp::create_object<app::SeinComboMoves>(get_class());
        }
    } // namespace SeinComboMoves
} // namespace app::classes::types
