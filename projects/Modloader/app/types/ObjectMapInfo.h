#pragma once
#include <Modloader/app/structs/ObjectMapInfo.h>
#include <Modloader/app/structs/ObjectMapInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ObjectMapInfo {
        inline app::ObjectMapInfo__Class** type_info() {
            static app::ObjectMapInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ObjectMapInfo__Class**)(modloader::win::memory::resolve_rva(0x0477C5F8));
            }
            return cache;
        }
        inline app::ObjectMapInfo__Class* get_class() {
            return il2cpp::get_class<app::ObjectMapInfo__Class>(type_info(), "System.Runtime.Serialization.Formatters.Binary", "ObjectMapInfo");
        }
        inline app::ObjectMapInfo* create() {
            return il2cpp::create_object<app::ObjectMapInfo>(get_class());
        }
    } // namespace ObjectMapInfo
} // namespace app::classes::types
