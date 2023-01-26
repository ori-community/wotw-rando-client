#pragma once
#include <Modloader/app/structs/AnimationParameterSet.h>
#include <Modloader/app/structs/AnimationParameterSet__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AnimationParameterSet {
        inline app::AnimationParameterSet__Class** type_info() {
            static app::AnimationParameterSet__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AnimationParameterSet__Class**)(modloader::win::memory::resolve_rva(0x0474F858));
            }
            return cache;
        }
        inline app::AnimationParameterSet__Class* get_class() {
            return il2cpp::get_class<app::AnimationParameterSet__Class>(type_info(), "Moon", "AnimationParameterSet");
        }
        inline app::AnimationParameterSet* create() {
            return il2cpp::create_object<app::AnimationParameterSet>(get_class());
        }
    } // namespace AnimationParameterSet
} // namespace app::classes::types
