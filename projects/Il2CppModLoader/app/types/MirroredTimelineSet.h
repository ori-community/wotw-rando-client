#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MirroredTimelineSet {
        inline app::MirroredTimelineSet__Class** type_info = (app::MirroredTimelineSet__Class**)(modloader::win::memory::resolve_rva(0x04795D48));
        inline app::MirroredTimelineSet__Class* get_class() {
            return il2cpp::get_class<app::MirroredTimelineSet__Class>(type_info, "", "MirroredTimelineSet");
        }
        inline app::MirroredTimelineSet* create() {
            return il2cpp::create_object<app::MirroredTimelineSet>(get_class());
        }
    } // namespace MirroredTimelineSet
} // namespace app::classes::types
