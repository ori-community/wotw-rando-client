#pragma once
#include <Modloader/app/structs/UberPostCacheIds.h>
#include <Modloader/app/structs/UberPostCacheIds__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberPostCacheIds {
        inline app::UberPostCacheIds__Class** type_info() {
            static app::UberPostCacheIds__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberPostCacheIds__Class**)(modloader::win::memory::resolve_rva(0x0475E740));
            }
            return cache;
        }
        inline app::UberPostCacheIds__Class* get_class() {
            return il2cpp::get_class<app::UberPostCacheIds__Class>(type_info(), "", "UberPostCacheIds");
        }
        inline app::UberPostCacheIds* create() {
            return il2cpp::create_object<app::UberPostCacheIds>(get_class());
        }
    } // namespace UberPostCacheIds
} // namespace app::classes::types
