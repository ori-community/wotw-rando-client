#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossGroundPiece__Array {
        namespace {
            inline app::PetrifiedOwlBossGroundPiece__Array__Class* type_info_ref = nullptr;
        }
        inline app::PetrifiedOwlBossGroundPiece__Array__Class** type_info = &type_info_ref;
        inline app::PetrifiedOwlBossGroundPiece__Array__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlBossGroundPiece__Array__Class>(type_info, "", "PetrifiedOwlBossGroundPiece[]");
        }
        inline app::PetrifiedOwlBossGroundPiece__Array* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossGroundPiece__Array>(get_class());
        }
    } // namespace PetrifiedOwlBossGroundPiece__Array
} // namespace app::classes::types
