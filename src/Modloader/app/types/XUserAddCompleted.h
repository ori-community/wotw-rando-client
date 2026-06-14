#pragma once
#include <Modloader/app/structs/XUserAddCompleted.h>
#include <Modloader/app/structs/XUserAddCompleted__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XUserAddCompleted {
        inline app::XUserAddCompleted__Class** type_info() {
            static app::XUserAddCompleted__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XUserAddCompleted__Class**)(modloader::win::memory::resolve_rva(0x0476AE78));
            }
            return cache;
        }
        inline app::XUserAddCompleted__Class* get_class() {
            return il2cpp::get_class<app::XUserAddCompleted__Class>(type_info(), "XGamingRuntime", "XUserAddCompleted");
        }
        inline app::XUserAddCompleted* create() {
            return il2cpp::create_object<app::XUserAddCompleted>(get_class());
        }
    } // namespace XUserAddCompleted
} // namespace app::classes::types
