#pragma once
#include <Modloader/app/structs/SoundComposition_1.h>
#include <Modloader/app/structs/SoundComposition_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SoundComposition_1 {
        inline app::SoundComposition_1__Class** type_info() {
            static app::SoundComposition_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SoundComposition_1__Class**)(modloader::win::memory::resolve_rva(0x04728CD8));
            }
            return cache;
        }
        inline app::SoundComposition_1__Class* get_class() {
            return il2cpp::get_class<app::SoundComposition_1__Class>(type_info(), "Core", "SoundComposition");
        }
        inline app::SoundComposition_1* create() {
            return il2cpp::create_object<app::SoundComposition_1>(get_class());
        }
    } // namespace SoundComposition_1
} // namespace app::classes::types
