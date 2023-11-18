#pragma once
#include <Modloader/app/structs/UInt32ArrayTypeInfo.h>
#include <Modloader/app/structs/UInt32ArrayTypeInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UInt32ArrayTypeInfo {
        inline app::UInt32ArrayTypeInfo__Class** type_info() {
            static app::UInt32ArrayTypeInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UInt32ArrayTypeInfo__Class**)(modloader::win::memory::resolve_rva(0x04772CF8));
            }
            return cache;
        }
        inline app::UInt32ArrayTypeInfo__Class* get_class() {
            return il2cpp::get_class<app::UInt32ArrayTypeInfo__Class>(type_info(), "System.Diagnostics.Tracing", "UInt32ArrayTypeInfo");
        }
        inline app::UInt32ArrayTypeInfo* create() {
            return il2cpp::create_object<app::UInt32ArrayTypeInfo>(get_class());
        }
    } // namespace UInt32ArrayTypeInfo
} // namespace app::classes::types
