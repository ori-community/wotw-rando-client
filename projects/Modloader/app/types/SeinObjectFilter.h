#pragma once
#include <Modloader/app/structs/SeinObjectFilter.h>
#include <Modloader/app/structs/SeinObjectFilter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinObjectFilter {
        inline app::SeinObjectFilter__Class** type_info() {
            static app::SeinObjectFilter__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinObjectFilter__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinObjectFilter__Class* get_class() {
            return il2cpp::get_class<app::SeinObjectFilter__Class>(type_info(), "", "SeinObjectFilter");
        }
        inline app::SeinObjectFilter* create() {
            return il2cpp::create_object<app::SeinObjectFilter>(get_class());
        }
    } // namespace SeinObjectFilter
} // namespace app::classes::types
