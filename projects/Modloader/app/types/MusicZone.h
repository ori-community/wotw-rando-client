#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MusicZone__Class.h>
#include <Modloader/app/structs/MusicZone.h>
#include <Modloader/app/structs/MusicZone__Array.h>

namespace app::classes::types {
    namespace MusicZone {
        inline app::MusicZone__Class** type_info = (app::MusicZone__Class**)(modloader::win::memory::resolve_rva(0x0470AEA0));
        inline app::MusicZone__Class* get_class() {
            return il2cpp::get_class<app::MusicZone__Class>(type_info, "", "MusicZone");
        }
        inline app::MusicZone* create() {
            return il2cpp::create_object<app::MusicZone>(get_class());
        }
        inline app::MusicZone__Array* create_array(int size) {
            return il2cpp::array_new<app::MusicZone__Array>(get_class(), size);
        }
        inline app::MusicZone__Array* create_array(const std::vector<app::MusicZone*>& items) {
            return il2cpp::array_new<app::MusicZone__Array>(get_class(), items);
        }
    } // namespace MusicZone
} // namespace app::classes::types
