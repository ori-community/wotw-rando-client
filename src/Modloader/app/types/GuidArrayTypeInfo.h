#pragma once
#include <Modloader/app/structs/GuidArrayTypeInfo.h>
#include <Modloader/app/structs/GuidArrayTypeInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GuidArrayTypeInfo {
        inline app::GuidArrayTypeInfo__Class** type_info() {
            static app::GuidArrayTypeInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GuidArrayTypeInfo__Class**)(modloader::win::memory::resolve_rva(0x0477E0C8));
            }
            return cache;
        }
        inline app::GuidArrayTypeInfo__Class* get_class() {
            return il2cpp::get_class<app::GuidArrayTypeInfo__Class>(type_info(), "System.Diagnostics.Tracing", "GuidArrayTypeInfo");
        }
        inline app::GuidArrayTypeInfo* create() {
            return il2cpp::create_object<app::GuidArrayTypeInfo>(get_class());
        }
    } // namespace GuidArrayTypeInfo
} // namespace app::classes::types
