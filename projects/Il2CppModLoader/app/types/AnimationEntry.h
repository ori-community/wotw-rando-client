#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AnimationEntry {
        namespace {
            app::AnimationEntry__Class* type_info_ref = nullptr;
        }
        app::AnimationEntry__Class** type_info = &type_info_ref;
        inline app::AnimationEntry__Class* get_class() {
            return il2cpp::get_class<app::AnimationEntry__Class>(type_info, "", "AnimationEntry");
        }
        inline app::AnimationEntry* create() {
            return il2cpp::create_object<app::AnimationEntry>(get_class());
        }
        inline app::AnimationEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::AnimationEntry__Array>(get_class(), size);
        }
    } // namespace AnimationEntry
} // namespace app::classes::types
