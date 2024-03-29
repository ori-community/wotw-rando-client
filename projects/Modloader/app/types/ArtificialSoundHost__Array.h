#pragma once
#include <Modloader/app/structs/ArtificialSoundHost__Array.h>
#include <Modloader/app/structs/ArtificialSoundHost__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ArtificialSoundHost__Array {
        inline app::ArtificialSoundHost__Array__Class** type_info() {
            static app::ArtificialSoundHost__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ArtificialSoundHost__Array__Class**)(modloader::win::memory::resolve_rva(0x04710358));
            }
            return cache;
        }
        inline app::ArtificialSoundHost__Array__Class* get_class() {
            return il2cpp::get_class<app::ArtificialSoundHost__Array__Class>(type_info(), "Moon.Wwise", "ArtificialSoundHost[]");
        }
        inline app::ArtificialSoundHost__Array* create() {
            return il2cpp::create_object<app::ArtificialSoundHost__Array>(get_class());
        }
    } // namespace ArtificialSoundHost__Array
} // namespace app::classes::types
