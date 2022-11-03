#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinDamageReciever_FlashSprite_d_85 {
        inline app::SeinDamageReciever_FlashSprite_d_85__Class** type_info = (app::SeinDamageReciever_FlashSprite_d_85__Class**)(modloader::win::memory::resolve_rva(0x047583F8));
        inline app::SeinDamageReciever_FlashSprite_d_85__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinDamageReciever_FlashSprite_d_85__Class>(type_info, "", "SeinDamageReciever", "<FlashSprite>d__85");
        }
        inline app::SeinDamageReciever_FlashSprite_d_85* create() {
            return il2cpp::create_object<app::SeinDamageReciever_FlashSprite_d_85>(get_class());
        }
    } // namespace SeinDamageReciever_FlashSprite_d_85
} // namespace app::classes::types
