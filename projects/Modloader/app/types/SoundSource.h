#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SoundSource {
        inline app::SoundSource__Class** type_info = (app::SoundSource__Class**)(modloader::win::memory::resolve_rva(0x04719580));
        inline app::SoundSource__Class* get_class() {
            return il2cpp::get_class<app::SoundSource__Class>(type_info, "", "SoundSource");
        }
        inline app::SoundSource* create() {
            return il2cpp::create_object<app::SoundSource>(get_class());
        }
    } // namespace SoundSource
} // namespace app::classes::types
