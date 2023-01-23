#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RequestCacheBinding__Class.h>
#include <Modloader/app/structs/RequestCacheBinding.h>

namespace app::classes::types {
    namespace RequestCacheBinding {
        inline app::RequestCacheBinding__Class** type_info = (app::RequestCacheBinding__Class**)(modloader::win::memory::resolve_rva(0x04732568));
        inline app::RequestCacheBinding__Class* get_class() {
            return il2cpp::get_class<app::RequestCacheBinding__Class>(type_info, "System.Net.Cache", "RequestCacheBinding");
        }
        inline app::RequestCacheBinding* create() {
            return il2cpp::create_object<app::RequestCacheBinding>(get_class());
        }
    } // namespace RequestCacheBinding
} // namespace app::classes::types
