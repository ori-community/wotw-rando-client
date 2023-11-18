#pragma once
#include <Modloader/app/structs/UInt16ArrayTypeInfo.h>
#include <Modloader/app/structs/UInt16ArrayTypeInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UInt16ArrayTypeInfo {
        inline app::UInt16ArrayTypeInfo__Class** type_info() {
            static app::UInt16ArrayTypeInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UInt16ArrayTypeInfo__Class**)(modloader::win::memory::resolve_rva(0x04729EF0));
            }
            return cache;
        }
        inline app::UInt16ArrayTypeInfo__Class* get_class() {
            return il2cpp::get_class<app::UInt16ArrayTypeInfo__Class>(type_info(), "System.Diagnostics.Tracing", "UInt16ArrayTypeInfo");
        }
        inline app::UInt16ArrayTypeInfo* create() {
            return il2cpp::create_object<app::UInt16ArrayTypeInfo>(get_class());
        }
    } // namespace UInt16ArrayTypeInfo
} // namespace app::classes::types
