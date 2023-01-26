#pragma once
#include <Modloader/app/structs/RtFieldInfo.h>
#include <Modloader/app/structs/RtFieldInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RtFieldInfo {
        inline app::RtFieldInfo__Class** type_info() {
            static app::RtFieldInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RtFieldInfo__Class**)(modloader::win::memory::resolve_rva(0x0474E498));
            }
            return cache;
        }
        inline app::RtFieldInfo__Class* get_class() {
            return il2cpp::get_class<app::RtFieldInfo__Class>(type_info(), "System.Reflection", "RtFieldInfo");
        }
        inline app::RtFieldInfo* create() {
            return il2cpp::create_object<app::RtFieldInfo>(get_class());
        }
    } // namespace RtFieldInfo
} // namespace app::classes::types
