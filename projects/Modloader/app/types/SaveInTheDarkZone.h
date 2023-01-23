#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SaveInTheDarkZone__Class.h>
#include <Modloader/app/structs/SaveInTheDarkZone.h>

namespace app::classes::types {
    namespace SaveInTheDarkZone {
        inline app::SaveInTheDarkZone__Class** type_info = (app::SaveInTheDarkZone__Class**)(modloader::win::memory::resolve_rva(0x04719010));
        inline app::SaveInTheDarkZone__Class* get_class() {
            return il2cpp::get_class<app::SaveInTheDarkZone__Class>(type_info, "", "SaveInTheDarkZone");
        }
        inline app::SaveInTheDarkZone* create() {
            return il2cpp::create_object<app::SaveInTheDarkZone>(get_class());
        }
    } // namespace SaveInTheDarkZone
} // namespace app::classes::types
