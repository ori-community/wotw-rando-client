#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SoundComposition_SoundLoop {
        namespace {
            app::SoundComposition_SoundLoop__Class* type_info_ref = nullptr;
        }
        app::SoundComposition_SoundLoop__Class** type_info = &type_info_ref;
        inline app::SoundComposition_SoundLoop__Class* get_class() {
            return il2cpp::get_nested_class<app::SoundComposition_SoundLoop__Class>(type_info, "", "SoundComposition", "SoundLoop");
        }
        inline app::SoundComposition_SoundLoop* create() {
            return il2cpp::create_object<app::SoundComposition_SoundLoop>(get_class());
        }
        inline app::SoundComposition_SoundLoop__Array* create_array(int size) {
            return il2cpp::array_new<app::SoundComposition_SoundLoop__Array>(get_class(), size);
        }
        inline app::SoundComposition_SoundLoop__Array* create_array(const std::vector<app::SoundComposition_SoundLoop*>& items) {
            return il2cpp::array_new<app::SoundComposition_SoundLoop__Array>(get_class(), items);
        }
    } // namespace SoundComposition_SoundLoop
} // namespace app::classes::types
