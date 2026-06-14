#pragma once
#include <Modloader/app/structs/SeinDrill.h>
#include <Modloader/app/structs/SeinDrill__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinDrill {
        inline app::SeinDrill__Class** type_info() {
            static app::SeinDrill__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinDrill__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinDrill__Class* get_class() {
            return il2cpp::get_class<app::SeinDrill__Class>(type_info(), "", "SeinDrill");
        }
        inline app::SeinDrill* create() {
            return il2cpp::create_object<app::SeinDrill>(get_class());
        }
    } // namespace SeinDrill
} // namespace app::classes::types
