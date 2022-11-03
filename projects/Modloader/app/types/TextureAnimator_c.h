#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TextureAnimator_c {
        inline app::TextureAnimator_c__Class** type_info = (app::TextureAnimator_c__Class**)(modloader::win::memory::resolve_rva(0x0475B798));
        inline app::TextureAnimator_c__Class* get_class() {
            return il2cpp::get_nested_class<app::TextureAnimator_c__Class>(type_info, "", "TextureAnimator", "<>c");
        }
        inline app::TextureAnimator_c* create() {
            return il2cpp::create_object<app::TextureAnimator_c>(get_class());
        }
    } // namespace TextureAnimator_c
} // namespace app::classes::types
