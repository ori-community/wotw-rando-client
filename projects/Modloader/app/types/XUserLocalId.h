#pragma once
#include <Modloader/app/structs/XUserLocalId.h>
#include <Modloader/app/structs/XUserLocalId__Boxed.h>
#include <Modloader/app/structs/XUserLocalId__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XUserLocalId {
        inline app::XUserLocalId__Class** type_info() {
            static app::XUserLocalId__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XUserLocalId__Class**)(modloader::win::memory::resolve_rva(0x04737F78));
            }
            return cache;
        }
        inline app::XUserLocalId__Class* get_class() {
            return il2cpp::get_class<app::XUserLocalId__Class>(type_info(), "XGamingRuntime", "XUserLocalId");
        }
        inline app::XUserLocalId* create() {
            return il2cpp::create_object<app::XUserLocalId>(get_class());
        }
        inline app::XUserLocalId__Boxed* box(app::XUserLocalId value) {
            return il2cpp::box_value<app::XUserLocalId__Boxed>(get_class(), value);
        }
    } // namespace XUserLocalId
} // namespace app::classes::types
