#pragma once
#include <Modloader/app/structs/IRaceSyncable.h>
#include <Modloader/app/structs/IRaceSyncable__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IRaceSyncable {
        inline app::IRaceSyncable__Class** type_info() {
            static app::IRaceSyncable__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IRaceSyncable__Class**)(modloader::win::memory::resolve_rva(0x047162A0));
            }
            return cache;
        }
        inline app::IRaceSyncable__Class* get_class() {
            return il2cpp::get_class<app::IRaceSyncable__Class>(type_info(), "Moon", "IRaceSyncable");
        }
    } // namespace IRaceSyncable
} // namespace app::classes::types
