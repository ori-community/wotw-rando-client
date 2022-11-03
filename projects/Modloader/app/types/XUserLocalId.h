#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XUserLocalId {
        inline app::XUserLocalId__Class** type_info = (app::XUserLocalId__Class**)(modloader::win::memory::resolve_rva(0x04737F78));
        inline app::XUserLocalId__Class* get_class() {
            return il2cpp::get_class<app::XUserLocalId__Class>(type_info, "XGamingRuntime", "XUserLocalId");
        }
        inline app::XUserLocalId* create() {
            return il2cpp::create_object<app::XUserLocalId>(get_class());
        }
        inline app::XUserLocalId__Boxed* box(app::XUserLocalId value) {
            return il2cpp::box_value<app::XUserLocalId__Boxed>(get_class(), value);
        }
    } // namespace XUserLocalId
} // namespace app::classes::types
