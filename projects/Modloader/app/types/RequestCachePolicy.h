#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RequestCachePolicy__Class.h>
#include <Modloader/app/structs/RequestCachePolicy.h>

namespace app::classes::types {
    namespace RequestCachePolicy {
        inline app::RequestCachePolicy__Class** type_info = (app::RequestCachePolicy__Class**)(modloader::win::memory::resolve_rva(0x04703F20));
        inline app::RequestCachePolicy__Class* get_class() {
            return il2cpp::get_class<app::RequestCachePolicy__Class>(type_info, "System.Net.Cache", "RequestCachePolicy");
        }
        inline app::RequestCachePolicy* create() {
            return il2cpp::create_object<app::RequestCachePolicy>(get_class());
        }
    } // namespace RequestCachePolicy
} // namespace app::classes::types
