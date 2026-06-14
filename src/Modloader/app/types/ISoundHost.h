#pragma once
#include <Modloader/app/structs/ISoundHost.h>
#include <Modloader/app/structs/ISoundHost__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ISoundHost {
        inline app::ISoundHost__Class** type_info() {
            static app::ISoundHost__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ISoundHost__Class**)(modloader::win::memory::resolve_rva(0x04712578));
            }
            return cache;
        }
        inline app::ISoundHost__Class* get_class() {
            return il2cpp::get_class<app::ISoundHost__Class>(type_info(), "Moon.Wwise", "ISoundHost");
        }
    } // namespace ISoundHost
} // namespace app::classes::types
