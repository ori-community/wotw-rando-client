#pragma once
#include <Modloader/app/structs/XUserChangeEvent__Enum.h>
#include <Modloader/app/structs/XUserChangeEvent__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XUserChangeEvent__Enum {
        inline app::XUserChangeEvent__Enum__Class** type_info() {
            static app::XUserChangeEvent__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XUserChangeEvent__Enum__Class**)(modloader::win::memory::resolve_rva(0x04702E90));
            }
            return cache;
        }
        inline app::XUserChangeEvent__Enum__Class* get_class() {
            return il2cpp::get_class<app::XUserChangeEvent__Enum__Class>(type_info(), "XGamingRuntime", "XUserChangeEvent");
        }
        inline app::XUserChangeEvent__Enum* create() {
            return il2cpp::create_object<app::XUserChangeEvent__Enum>(get_class());
        }
    } // namespace XUserChangeEvent__Enum
} // namespace app::classes::types
