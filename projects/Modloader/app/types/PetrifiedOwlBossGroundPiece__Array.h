#pragma once
#include <Modloader/app/structs/PetrifiedOwlBossGroundPiece__Array.h>
#include <Modloader/app/structs/PetrifiedOwlBossGroundPiece__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossGroundPiece__Array {
        inline app::PetrifiedOwlBossGroundPiece__Array__Class** type_info() {
            static app::PetrifiedOwlBossGroundPiece__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PetrifiedOwlBossGroundPiece__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PetrifiedOwlBossGroundPiece__Array__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlBossGroundPiece__Array__Class>(type_info(), "", "PetrifiedOwlBossGroundPiece[]");
        }
        inline app::PetrifiedOwlBossGroundPiece__Array* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossGroundPiece__Array>(get_class());
        }
    } // namespace PetrifiedOwlBossGroundPiece__Array
} // namespace app::classes::types
