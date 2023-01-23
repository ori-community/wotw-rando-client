#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IDynamicMetaObjectProvider__Class.h>

namespace app::classes::types {
    namespace IDynamicMetaObjectProvider {
        inline app::IDynamicMetaObjectProvider__Class** type_info = (app::IDynamicMetaObjectProvider__Class**)(modloader::win::memory::resolve_rva(0x047025B0));
        inline app::IDynamicMetaObjectProvider__Class* get_class() {
            return il2cpp::get_class<app::IDynamicMetaObjectProvider__Class>(type_info, "System.Dynamic", "IDynamicMetaObjectProvider");
        }
    } // namespace IDynamicMetaObjectProvider
} // namespace app::classes::types
