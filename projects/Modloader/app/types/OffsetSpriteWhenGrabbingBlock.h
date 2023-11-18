#pragma once
#include <Modloader/app/structs/OffsetSpriteWhenGrabbingBlock.h>
#include <Modloader/app/structs/OffsetSpriteWhenGrabbingBlock__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OffsetSpriteWhenGrabbingBlock {
        inline app::OffsetSpriteWhenGrabbingBlock__Class** type_info() {
            static app::OffsetSpriteWhenGrabbingBlock__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::OffsetSpriteWhenGrabbingBlock__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::OffsetSpriteWhenGrabbingBlock__Class* get_class() {
            return il2cpp::get_class<app::OffsetSpriteWhenGrabbingBlock__Class>(type_info(), "", "OffsetSpriteWhenGrabbingBlock");
        }
        inline app::OffsetSpriteWhenGrabbingBlock* create() {
            return il2cpp::create_object<app::OffsetSpriteWhenGrabbingBlock>(get_class());
        }
    } // namespace OffsetSpriteWhenGrabbingBlock
} // namespace app::classes::types
