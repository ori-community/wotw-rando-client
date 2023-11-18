#pragma once
#include <Modloader/app/structs/SoundSize.h>
#include <Modloader/app/structs/SoundSize__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SoundSize {
        inline app::SoundSize__Class** type_info() {
            static app::SoundSize__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SoundSize__Class**)(modloader::win::memory::resolve_rva(0x04794EB8));
            }
            return cache;
        }
        inline app::SoundSize__Class* get_class() {
            return il2cpp::get_class<app::SoundSize__Class>(type_info(), "", "SoundSize");
        }
        inline app::SoundSize* create() {
            return il2cpp::create_object<app::SoundSize>(get_class());
        }
    } // namespace SoundSize
} // namespace app::classes::types
