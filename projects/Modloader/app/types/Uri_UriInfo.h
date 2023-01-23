#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Uri_UriInfo__Class.h>
#include <Modloader/app/structs/Uri_UriInfo.h>

namespace app::classes::types {
    namespace Uri_UriInfo {
        inline app::Uri_UriInfo__Class** type_info = (app::Uri_UriInfo__Class**)(modloader::win::memory::resolve_rva(0x0470D538));
        inline app::Uri_UriInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::Uri_UriInfo__Class>(type_info, "System", "Uri", "UriInfo");
        }
        inline app::Uri_UriInfo* create() {
            return il2cpp::create_object<app::Uri_UriInfo>(get_class());
        }
    } // namespace Uri_UriInfo
} // namespace app::classes::types
