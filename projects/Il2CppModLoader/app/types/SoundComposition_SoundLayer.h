#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SoundComposition_SoundLayer {
        namespace {
            app::SoundComposition_SoundLayer__Class* type_info_ref = nullptr;
        }
        app::SoundComposition_SoundLayer__Class** type_info = &type_info_ref;
        inline app::SoundComposition_SoundLayer__Class* get_class() {
            return il2cpp::get_nested_class<app::SoundComposition_SoundLayer__Class>(type_info, "", "SoundComposition", "SoundLayer");
        }
        inline app::SoundComposition_SoundLayer* create() {
            return il2cpp::create_object<app::SoundComposition_SoundLayer>(get_class());
        }
        inline app::SoundComposition_SoundLayer__Array* create_array(int size) {
            return il2cpp::array_new<app::SoundComposition_SoundLayer__Array>(get_class(), size);
        }
    } // namespace SoundComposition_SoundLayer
} // namespace app::classes::types
