#pragma once
#include <Modloader/app/structs/ZonesProperties.h>
#include <Modloader/app/structs/ZonesProperties__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ZonesProperties {
        inline app::ZonesProperties__Class** type_info() {
            static app::ZonesProperties__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ZonesProperties__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ZonesProperties__Class* get_class() {
            return il2cpp::get_class<app::ZonesProperties__Class>(type_info(), "", "ZonesProperties");
        }
        inline app::ZonesProperties* create() {
            return il2cpp::create_object<app::ZonesProperties>(get_class());
        }
    } // namespace ZonesProperties
} // namespace app::classes::types
