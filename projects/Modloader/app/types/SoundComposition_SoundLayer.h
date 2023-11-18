#pragma once
#include <Modloader/app/structs/SoundComposition_SoundLayer.h>
#include <Modloader/app/structs/SoundComposition_SoundLayer__Array.h>
#include <Modloader/app/structs/SoundComposition_SoundLayer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SoundComposition_SoundLayer {
        inline app::SoundComposition_SoundLayer__Class** type_info() {
            static app::SoundComposition_SoundLayer__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SoundComposition_SoundLayer__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SoundComposition_SoundLayer__Class* get_class() {
            return il2cpp::get_nested_class<app::SoundComposition_SoundLayer__Class>(type_info(), "", "SoundComposition", "SoundLayer");
        }
        inline app::SoundComposition_SoundLayer* create() {
            return il2cpp::create_object<app::SoundComposition_SoundLayer>(get_class());
        }
        inline app::SoundComposition_SoundLayer__Array* create_array(int size) {
            return il2cpp::array_new<app::SoundComposition_SoundLayer__Array>(get_class(), size);
        }
        inline app::SoundComposition_SoundLayer__Array* create_array(const std::vector<app::SoundComposition_SoundLayer*>& items) {
            return il2cpp::array_new<app::SoundComposition_SoundLayer__Array>(get_class(), items);
        }
    } // namespace SoundComposition_SoundLayer
} // namespace app::classes::types
