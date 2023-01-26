#pragma once
#include <Modloader/app/structs/XUserGamertagComponent__Enum.h>
#include <Modloader/app/structs/XUserGamertagComponent__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XUserGamertagComponent__Enum {
        inline app::XUserGamertagComponent__Enum__Class** type_info() {
            static app::XUserGamertagComponent__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XUserGamertagComponent__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XUserGamertagComponent__Enum__Class* get_class() {
            return il2cpp::get_class<app::XUserGamertagComponent__Enum__Class>(type_info(), "XGamingRuntime", "XUserGamertagComponent");
        }
        inline app::XUserGamertagComponent__Enum* create() {
            return il2cpp::create_object<app::XUserGamertagComponent__Enum>(get_class());
        }
    } // namespace XUserGamertagComponent__Enum
} // namespace app::classes::types
