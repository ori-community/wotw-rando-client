#pragma once
#include <Modloader/app/structs/TriggerByString.h>
#include <Modloader/app/structs/TriggerByString__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TriggerByString {
        inline app::TriggerByString__Class** type_info() {
            static app::TriggerByString__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TriggerByString__Class**)(modloader::win::memory::resolve_rva(0x04788B60));
            }
            return cache;
        }
        inline app::TriggerByString__Class* get_class() {
            return il2cpp::get_class<app::TriggerByString__Class>(type_info(), "", "TriggerByString");
        }
        inline app::TriggerByString* create() {
            return il2cpp::create_object<app::TriggerByString>(get_class());
        }
    } // namespace TriggerByString
} // namespace app::classes::types
