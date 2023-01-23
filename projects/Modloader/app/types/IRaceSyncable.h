#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IRaceSyncable__Class.h>

namespace app::classes::types {
    namespace IRaceSyncable {
        inline app::IRaceSyncable__Class** type_info = (app::IRaceSyncable__Class**)(modloader::win::memory::resolve_rva(0x047162A0));
        inline app::IRaceSyncable__Class* get_class() {
            return il2cpp::get_class<app::IRaceSyncable__Class>(type_info, "Moon", "IRaceSyncable");
        }
    } // namespace IRaceSyncable
} // namespace app::classes::types
