#pragma once
#include <Modloader/app/structs/UInt16TypeInfo.h>
#include <Modloader/app/structs/UInt16TypeInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UInt16TypeInfo {
        inline app::UInt16TypeInfo__Class** type_info() {
            static app::UInt16TypeInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UInt16TypeInfo__Class**)(modloader::win::memory::resolve_rva(0x04789A90));
            }
            return cache;
        }
        inline app::UInt16TypeInfo__Class* get_class() {
            return il2cpp::get_class<app::UInt16TypeInfo__Class>(type_info(), "System.Diagnostics.Tracing", "UInt16TypeInfo");
        }
        inline app::UInt16TypeInfo* create() {
            return il2cpp::create_object<app::UInt16TypeInfo>(get_class());
        }
    } // namespace UInt16TypeInfo
} // namespace app::classes::types
