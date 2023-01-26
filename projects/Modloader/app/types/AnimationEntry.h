#pragma once
#include <Modloader/app/structs/AnimationEntry.h>
#include <Modloader/app/structs/AnimationEntry__Array.h>
#include <Modloader/app/structs/AnimationEntry__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AnimationEntry {
        inline app::AnimationEntry__Class** type_info() {
            static app::AnimationEntry__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AnimationEntry__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AnimationEntry__Class* get_class() {
            return il2cpp::get_class<app::AnimationEntry__Class>(type_info(), "", "AnimationEntry");
        }
        inline app::AnimationEntry* create() {
            return il2cpp::create_object<app::AnimationEntry>(get_class());
        }
        inline app::AnimationEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::AnimationEntry__Array>(get_class(), size);
        }
        inline app::AnimationEntry__Array* create_array(const std::vector<app::AnimationEntry*>& items) {
            return il2cpp::array_new<app::AnimationEntry__Array>(get_class(), items);
        }
    } // namespace AnimationEntry
} // namespace app::classes::types
