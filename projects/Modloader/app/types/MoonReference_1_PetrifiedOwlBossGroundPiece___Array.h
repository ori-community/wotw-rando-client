#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MoonReference_1_PetrifiedOwlBossGroundPiece___Array__Class.h>
#include <Modloader/app/structs/MoonReference_1_PetrifiedOwlBossGroundPiece___Array.h>

namespace app::classes::types {
    namespace MoonReference_1_PetrifiedOwlBossGroundPiece___Array {
        namespace {
            inline app::MoonReference_1_PetrifiedOwlBossGroundPiece___Array__Class* type_info_ref = nullptr;
        }
        inline app::MoonReference_1_PetrifiedOwlBossGroundPiece___Array__Class** type_info = &type_info_ref;
        inline app::MoonReference_1_PetrifiedOwlBossGroundPiece___Array__Class* get_class() {
            return il2cpp::get_class<app::MoonReference_1_PetrifiedOwlBossGroundPiece___Array__Class>(type_info, "Moon", "MoonReference`1[PetrifiedOwlBossGroundPiece][]");
        }
        inline app::MoonReference_1_PetrifiedOwlBossGroundPiece___Array* create() {
            return il2cpp::create_object<app::MoonReference_1_PetrifiedOwlBossGroundPiece___Array>(get_class());
        }
    } // namespace MoonReference_1_PetrifiedOwlBossGroundPiece___Array
} // namespace app::classes::types
