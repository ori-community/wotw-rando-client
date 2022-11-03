#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SoundCompositionPlayer_c_DisplayClass12_0 {
        inline app::SoundCompositionPlayer_c_DisplayClass12_0__Class** type_info = (app::SoundCompositionPlayer_c_DisplayClass12_0__Class**)(modloader::win::memory::resolve_rva(0x04707F50));
        inline app::SoundCompositionPlayer_c_DisplayClass12_0__Class* get_class() {
            return il2cpp::get_nested_class<app::SoundCompositionPlayer_c_DisplayClass12_0__Class>(type_info, "", "SoundCompositionPlayer", "<>c__DisplayClass12_0");
        }
        inline app::SoundCompositionPlayer_c_DisplayClass12_0* create() {
            return il2cpp::create_object<app::SoundCompositionPlayer_c_DisplayClass12_0>(get_class());
        }
    } // namespace SoundCompositionPlayer_c_DisplayClass12_0
} // namespace app::classes::types
