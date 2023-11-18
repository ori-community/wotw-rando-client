#pragma once
#include <Modloader/app/structs/AnimatedCritter.h>
#include <Modloader/app/structs/AnimatedCritter__Array.h>
#include <Modloader/app/structs/AnimatedCritter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AnimatedCritter {
        inline app::AnimatedCritter__Class** type_info() {
            static app::AnimatedCritter__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AnimatedCritter__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AnimatedCritter__Class* get_class() {
            return il2cpp::get_class<app::AnimatedCritter__Class>(type_info(), "", "AnimatedCritter");
        }
        inline app::AnimatedCritter* create() {
            return il2cpp::create_object<app::AnimatedCritter>(get_class());
        }
        inline app::AnimatedCritter__Array* create_array(int size) {
            return il2cpp::array_new<app::AnimatedCritter__Array>(get_class(), size);
        }
        inline app::AnimatedCritter__Array* create_array(const std::vector<app::AnimatedCritter*>& items) {
            return il2cpp::array_new<app::AnimatedCritter__Array>(get_class(), items);
        }
    } // namespace AnimatedCritter
} // namespace app::classes::types
