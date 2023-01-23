#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SoundSize__Class.h>
#include <Modloader/app/structs/SoundSize.h>

namespace app::classes::types {
    namespace SoundSize {
        inline app::SoundSize__Class** type_info = (app::SoundSize__Class**)(modloader::win::memory::resolve_rva(0x04794EB8));
        inline app::SoundSize__Class* get_class() {
            return il2cpp::get_class<app::SoundSize__Class>(type_info, "", "SoundSize");
        }
        inline app::SoundSize* create() {
            return il2cpp::create_object<app::SoundSize>(get_class());
        }
    } // namespace SoundSize
} // namespace app::classes::types
