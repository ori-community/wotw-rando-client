#pragma once
#include <Modloader/app/structs/AnimatedCritter__Array.h>
#include <Modloader/app/structs/AnimatedCritter__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AnimatedCritter__Array {
        inline app::AnimatedCritter__Array__Class** type_info() {
            static app::AnimatedCritter__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AnimatedCritter__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AnimatedCritter__Array__Class* get_class() {
            return il2cpp::get_class<app::AnimatedCritter__Array__Class>(type_info(), "", "AnimatedCritter[]");
        }
        inline app::AnimatedCritter__Array* create() {
            return il2cpp::create_object<app::AnimatedCritter__Array>(get_class());
        }
    } // namespace AnimatedCritter__Array
} // namespace app::classes::types
