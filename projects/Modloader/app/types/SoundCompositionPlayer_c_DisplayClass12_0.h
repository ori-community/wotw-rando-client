#pragma once
#include <Modloader/app/structs/SoundCompositionPlayer_c_DisplayClass12_0.h>
#include <Modloader/app/structs/SoundCompositionPlayer_c_DisplayClass12_0__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SoundCompositionPlayer_c_DisplayClass12_0 {
        inline app::SoundCompositionPlayer_c_DisplayClass12_0__Class** type_info() {
            static app::SoundCompositionPlayer_c_DisplayClass12_0__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SoundCompositionPlayer_c_DisplayClass12_0__Class**)(modloader::win::memory::resolve_rva(0x04707F50));
            }
            return cache;
        }
        inline app::SoundCompositionPlayer_c_DisplayClass12_0__Class* get_class() {
            return il2cpp::get_nested_class<app::SoundCompositionPlayer_c_DisplayClass12_0__Class>(type_info(), "", "SoundCompositionPlayer", "<>c__DisplayClass12_0");
        }
        inline app::SoundCompositionPlayer_c_DisplayClass12_0* create() {
            return il2cpp::create_object<app::SoundCompositionPlayer_c_DisplayClass12_0>(get_class());
        }
    } // namespace SoundCompositionPlayer_c_DisplayClass12_0
} // namespace app::classes::types
