#pragma once
#include <Modloader/app/structs/AreaMapIconFilterFooterLabel__Array.h>
#include <Modloader/app/structs/AreaMapIconFilterFooterLabel__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AreaMapIconFilterFooterLabel__Array {
        inline app::AreaMapIconFilterFooterLabel__Array__Class** type_info() {
            static app::AreaMapIconFilterFooterLabel__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AreaMapIconFilterFooterLabel__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AreaMapIconFilterFooterLabel__Array__Class* get_class() {
            return il2cpp::get_class<app::AreaMapIconFilterFooterLabel__Array__Class>(type_info(), "", "AreaMapIconFilterFooterLabel[]");
        }
        inline app::AreaMapIconFilterFooterLabel__Array* create() {
            return il2cpp::create_object<app::AreaMapIconFilterFooterLabel__Array>(get_class());
        }
    } // namespace AreaMapIconFilterFooterLabel__Array
} // namespace app::classes::types
