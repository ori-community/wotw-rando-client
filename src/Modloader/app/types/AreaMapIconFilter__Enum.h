#pragma once
#include <Modloader/app/structs/AreaMapIconFilter__Enum.h>
#include <Modloader/app/structs/AreaMapIconFilter__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AreaMapIconFilter__Enum {
        inline app::AreaMapIconFilter__Enum__Class** type_info() {
            static app::AreaMapIconFilter__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AreaMapIconFilter__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AreaMapIconFilter__Enum__Class* get_class() {
            return il2cpp::get_class<app::AreaMapIconFilter__Enum__Class>(type_info(), "", "AreaMapIconFilter");
        }
        inline app::AreaMapIconFilter__Enum* create() {
            return il2cpp::create_object<app::AreaMapIconFilter__Enum>(get_class());
        }
    } // namespace AreaMapIconFilter__Enum
} // namespace app::classes::types
