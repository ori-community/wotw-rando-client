#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ArtificialSoundHost__Class.h>
#include <Modloader/app/structs/ArtificialSoundHost.h>
#include <Modloader/app/structs/ArtificialSoundHost__Array.h>

namespace app::classes::types {
    namespace ArtificialSoundHost {
        inline app::ArtificialSoundHost__Class** type_info = (app::ArtificialSoundHost__Class**)(modloader::win::memory::resolve_rva(0x04704320));
        inline app::ArtificialSoundHost__Class* get_class() {
            return il2cpp::get_class<app::ArtificialSoundHost__Class>(type_info, "Moon.Wwise", "ArtificialSoundHost");
        }
        inline app::ArtificialSoundHost* create() {
            return il2cpp::create_object<app::ArtificialSoundHost>(get_class());
        }
        inline app::ArtificialSoundHost__Array* create_array(int size) {
            return il2cpp::array_new<app::ArtificialSoundHost__Array>(get_class(), size);
        }
        inline app::ArtificialSoundHost__Array* create_array(const std::vector<app::ArtificialSoundHost*>& items) {
            return il2cpp::array_new<app::ArtificialSoundHost__Array>(get_class(), items);
        }
    } // namespace ArtificialSoundHost
} // namespace app::classes::types
