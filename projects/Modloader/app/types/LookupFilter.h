#pragma once
#include <Modloader/app/structs/LookupFilter.h>
#include <Modloader/app/structs/LookupFilter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LookupFilter {
        inline app::LookupFilter__Class** type_info() {
            static app::LookupFilter__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LookupFilter__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LookupFilter__Class* get_class() {
            return il2cpp::get_class<app::LookupFilter__Class>(type_info(), "Colorful", "LookupFilter");
        }
        inline app::LookupFilter* create() {
            return il2cpp::create_object<app::LookupFilter>(get_class());
        }
    } // namespace LookupFilter
} // namespace app::classes::types
