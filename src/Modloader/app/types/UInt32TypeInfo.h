#pragma once
#include <Modloader/app/structs/UInt32TypeInfo.h>
#include <Modloader/app/structs/UInt32TypeInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UInt32TypeInfo {
        inline app::UInt32TypeInfo__Class** type_info() {
            static app::UInt32TypeInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UInt32TypeInfo__Class**)(modloader::win::memory::resolve_rva(0x047932F0));
            }
            return cache;
        }
        inline app::UInt32TypeInfo__Class* get_class() {
            return il2cpp::get_class<app::UInt32TypeInfo__Class>(type_info(), "System.Diagnostics.Tracing", "UInt32TypeInfo");
        }
        inline app::UInt32TypeInfo* create() {
            return il2cpp::create_object<app::UInt32TypeInfo>(get_class());
        }
    } // namespace UInt32TypeInfo
} // namespace app::classes::types
