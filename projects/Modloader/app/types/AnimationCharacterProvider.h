#pragma once
#include <Modloader/app/structs/AnimationCharacterProvider.h>
#include <Modloader/app/structs/AnimationCharacterProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AnimationCharacterProvider {
        inline app::AnimationCharacterProvider__Class** type_info() {
            static app::AnimationCharacterProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AnimationCharacterProvider__Class**)(modloader::win::memory::resolve_rva(0x04780960));
            }
            return cache;
        }
        inline app::AnimationCharacterProvider__Class* get_class() {
            return il2cpp::get_class<app::AnimationCharacterProvider__Class>(type_info(), "", "AnimationCharacterProvider");
        }
        inline app::AnimationCharacterProvider* create() {
            return il2cpp::create_object<app::AnimationCharacterProvider>(get_class());
        }
    } // namespace AnimationCharacterProvider
} // namespace app::classes::types
