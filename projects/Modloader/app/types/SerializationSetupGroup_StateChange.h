#pragma once
#include <Modloader/app/structs/SerializationSetupGroup_StateChange.h>
#include <Modloader/app/structs/SerializationSetupGroup_StateChange__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SerializationSetupGroup_StateChange {
        inline app::SerializationSetupGroup_StateChange__Class** type_info() {
            static app::SerializationSetupGroup_StateChange__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SerializationSetupGroup_StateChange__Class**)(modloader::win::memory::resolve_rva(0x0470D638));
            }
            return cache;
        }
        inline app::SerializationSetupGroup_StateChange__Class* get_class() {
            return il2cpp::get_nested_class<app::SerializationSetupGroup_StateChange__Class>(type_info(), "", "SerializationSetupGroup", "StateChange");
        }
        inline app::SerializationSetupGroup_StateChange* create() {
            return il2cpp::create_object<app::SerializationSetupGroup_StateChange>(get_class());
        }
    } // namespace SerializationSetupGroup_StateChange
} // namespace app::classes::types
