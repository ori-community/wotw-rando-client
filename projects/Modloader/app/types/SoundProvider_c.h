#pragma once
#include <Modloader/app/structs/SoundProvider_c.h>
#include <Modloader/app/structs/SoundProvider_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SoundProvider_c {
        inline app::SoundProvider_c__Class** type_info() {
            static app::SoundProvider_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SoundProvider_c__Class**)(modloader::win::memory::resolve_rva(0x0476F688));
            }
            return cache;
        }
        inline app::SoundProvider_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SoundProvider_c__Class>(type_info(), "", "SoundProvider", "<>c");
        }
        inline app::SoundProvider_c* create() {
            return il2cpp::create_object<app::SoundProvider_c>(get_class());
        }
    } // namespace SoundProvider_c
} // namespace app::classes::types
