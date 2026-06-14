#pragma once
#include <Modloader/app/structs/SingleTypeInfo.h>
#include <Modloader/app/structs/SingleTypeInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SingleTypeInfo {
        inline app::SingleTypeInfo__Class** type_info() {
            static app::SingleTypeInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SingleTypeInfo__Class**)(modloader::win::memory::resolve_rva(0x04790928));
            }
            return cache;
        }
        inline app::SingleTypeInfo__Class* get_class() {
            return il2cpp::get_class<app::SingleTypeInfo__Class>(type_info(), "System.Diagnostics.Tracing", "SingleTypeInfo");
        }
        inline app::SingleTypeInfo* create() {
            return il2cpp::create_object<app::SingleTypeInfo>(get_class());
        }
    } // namespace SingleTypeInfo
} // namespace app::classes::types
