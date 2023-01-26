#pragma once
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/SerializationInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SerializationInfo {
        inline app::SerializationInfo__Class** type_info() {
            static app::SerializationInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SerializationInfo__Class**)(modloader::win::memory::resolve_rva(0x047592D0));
            }
            return cache;
        }
        inline app::SerializationInfo__Class* get_class() {
            return il2cpp::get_class<app::SerializationInfo__Class>(type_info(), "System.Runtime.Serialization", "SerializationInfo");
        }
        inline app::SerializationInfo* create() {
            return il2cpp::create_object<app::SerializationInfo>(get_class());
        }
    } // namespace SerializationInfo
} // namespace app::classes::types
