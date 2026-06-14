#pragma once
#include <Modloader/app/structs/RequestCacheLevel__Enum.h>
#include <Modloader/app/structs/RequestCacheLevel__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RequestCacheLevel__Enum {
        inline app::RequestCacheLevel__Enum__Class** type_info() {
            static app::RequestCacheLevel__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RequestCacheLevel__Enum__Class**)(modloader::win::memory::resolve_rva(0x04755218));
            }
            return cache;
        }
        inline app::RequestCacheLevel__Enum__Class* get_class() {
            return il2cpp::get_class<app::RequestCacheLevel__Enum__Class>(type_info(), "System.Net.Cache", "RequestCacheLevel");
        }
        inline app::RequestCacheLevel__Enum* create() {
            return il2cpp::create_object<app::RequestCacheLevel__Enum>(get_class());
        }
    } // namespace RequestCacheLevel__Enum
} // namespace app::classes::types
