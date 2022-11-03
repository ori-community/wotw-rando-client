#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TexturePoolEntity__Array {
        namespace {
            inline app::TexturePoolEntity__Array__Class* type_info_ref = nullptr;
        }
        inline app::TexturePoolEntity__Array__Class** type_info = &type_info_ref;
        inline app::TexturePoolEntity__Array__Class* get_class() {
            return il2cpp::get_class<app::TexturePoolEntity__Array__Class>(type_info, "Moon.ArtOptimization", "TexturePoolEntity[]");
        }
        inline app::TexturePoolEntity__Array* create() {
            return il2cpp::create_object<app::TexturePoolEntity__Array>(get_class());
        }
    } // namespace TexturePoolEntity__Array
} // namespace app::classes::types
