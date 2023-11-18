#pragma once
#include <Modloader/app/structs/TexturePoolEntity__Array.h>
#include <Modloader/app/structs/TexturePoolEntity__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TexturePoolEntity__Array {
        inline app::TexturePoolEntity__Array__Class** type_info() {
            static app::TexturePoolEntity__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TexturePoolEntity__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TexturePoolEntity__Array__Class* get_class() {
            return il2cpp::get_class<app::TexturePoolEntity__Array__Class>(type_info(), "Moon.ArtOptimization", "TexturePoolEntity[]");
        }
        inline app::TexturePoolEntity__Array* create() {
            return il2cpp::create_object<app::TexturePoolEntity__Array>(get_class());
        }
    } // namespace TexturePoolEntity__Array
} // namespace app::classes::types
