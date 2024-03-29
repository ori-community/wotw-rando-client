#pragma once
#include <Modloader/app/structs/ReadObjectInfo.h>
#include <Modloader/app/structs/ReadObjectInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ReadObjectInfo {
        inline app::ReadObjectInfo__Class** type_info() {
            static app::ReadObjectInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ReadObjectInfo__Class**)(modloader::win::memory::resolve_rva(0x04725D60));
            }
            return cache;
        }
        inline app::ReadObjectInfo__Class* get_class() {
            return il2cpp::get_class<app::ReadObjectInfo__Class>(type_info(), "System.Runtime.Serialization.Formatters.Binary", "ReadObjectInfo");
        }
        inline app::ReadObjectInfo* create() {
            return il2cpp::create_object<app::ReadObjectInfo>(get_class());
        }
    } // namespace ReadObjectInfo
} // namespace app::classes::types
