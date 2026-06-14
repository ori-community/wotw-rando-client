#pragma once
#include <Modloader/app/structs/XUserAddOptions__Enum.h>
#include <Modloader/app/structs/XUserAddOptions__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XUserAddOptions__Enum {
        inline app::XUserAddOptions__Enum__Class** type_info() {
            static app::XUserAddOptions__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XUserAddOptions__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XUserAddOptions__Enum__Class* get_class() {
            return il2cpp::get_class<app::XUserAddOptions__Enum__Class>(type_info(), "XGamingRuntime", "XUserAddOptions");
        }
        inline app::XUserAddOptions__Enum* create() {
            return il2cpp::create_object<app::XUserAddOptions__Enum>(get_class());
        }
    } // namespace XUserAddOptions__Enum
} // namespace app::classes::types
