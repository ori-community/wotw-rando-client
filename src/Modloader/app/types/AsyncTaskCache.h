#pragma once
#include <Modloader/app/structs/AsyncTaskCache.h>
#include <Modloader/app/structs/AsyncTaskCache__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AsyncTaskCache {
        inline app::AsyncTaskCache__Class** type_info() {
            static app::AsyncTaskCache__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AsyncTaskCache__Class**)(modloader::win::memory::resolve_rva(0x047170C8));
            }
            return cache;
        }
        inline app::AsyncTaskCache__Class* get_class() {
            return il2cpp::get_class<app::AsyncTaskCache__Class>(type_info(), "System.Runtime.CompilerServices", "AsyncTaskCache");
        }
        inline app::AsyncTaskCache* create() {
            return il2cpp::create_object<app::AsyncTaskCache>(get_class());
        }
    } // namespace AsyncTaskCache
} // namespace app::classes::types
