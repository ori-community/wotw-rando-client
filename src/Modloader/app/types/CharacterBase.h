#pragma once
#include <Modloader/app/structs/CharacterBase.h>
#include <Modloader/app/structs/CharacterBase__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CharacterBase {
        inline app::CharacterBase__Class** type_info() {
            static app::CharacterBase__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CharacterBase__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CharacterBase__Class* get_class() {
            return il2cpp::get_class<app::CharacterBase__Class>(type_info(), "RootMotion.Demos", "CharacterBase");
        }
        inline app::CharacterBase* create() {
            return il2cpp::create_object<app::CharacterBase>(get_class());
        }
    } // namespace CharacterBase
} // namespace app::classes::types
