#pragma once
#include <Modloader/app/structs/CharactersDynamicProvider.h>
#include <Modloader/app/structs/CharactersDynamicProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CharactersDynamicProvider {
        inline app::CharactersDynamicProvider__Class** type_info() {
            static app::CharactersDynamicProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CharactersDynamicProvider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CharactersDynamicProvider__Class* get_class() {
            return il2cpp::get_class<app::CharactersDynamicProvider__Class>(type_info(), "", "CharactersDynamicProvider");
        }
        inline app::CharactersDynamicProvider* create() {
            return il2cpp::create_object<app::CharactersDynamicProvider>(get_class());
        }
    } // namespace CharactersDynamicProvider
} // namespace app::classes::types
