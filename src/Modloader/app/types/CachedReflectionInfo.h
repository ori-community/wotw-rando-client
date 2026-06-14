#pragma once
#include <Modloader/app/structs/CachedReflectionInfo.h>
#include <Modloader/app/structs/CachedReflectionInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CachedReflectionInfo {
        inline app::CachedReflectionInfo__Class** type_info() {
            static app::CachedReflectionInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CachedReflectionInfo__Class**)(modloader::win::memory::resolve_rva(0x0477BD10));
            }
            return cache;
        }
        inline app::CachedReflectionInfo__Class* get_class() {
            return il2cpp::get_class<app::CachedReflectionInfo__Class>(type_info(), "System.Linq.Expressions", "CachedReflectionInfo");
        }
        inline app::CachedReflectionInfo* create() {
            return il2cpp::create_object<app::CachedReflectionInfo>(get_class());
        }
    } // namespace CachedReflectionInfo
} // namespace app::classes::types
