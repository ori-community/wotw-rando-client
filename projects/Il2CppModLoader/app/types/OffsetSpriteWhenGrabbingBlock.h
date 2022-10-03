#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OffsetSpriteWhenGrabbingBlock {
        namespace {
            app::OffsetSpriteWhenGrabbingBlock__Class* type_info_ref = nullptr;
        }
        app::OffsetSpriteWhenGrabbingBlock__Class** type_info = &type_info_ref;
        inline app::OffsetSpriteWhenGrabbingBlock__Class* get_class() {
            return il2cpp::get_class<app::OffsetSpriteWhenGrabbingBlock__Class>(type_info, "", "OffsetSpriteWhenGrabbingBlock");
        }
        inline app::OffsetSpriteWhenGrabbingBlock* create() {
            return il2cpp::create_object<app::OffsetSpriteWhenGrabbingBlock>(get_class());
        }
    } // namespace OffsetSpriteWhenGrabbingBlock
} // namespace app::classes::types
