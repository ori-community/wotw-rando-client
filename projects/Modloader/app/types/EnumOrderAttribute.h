#pragma once
#include <Modloader/app/structs/EnumOrderAttribute.h>
#include <Modloader/app/structs/EnumOrderAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EnumOrderAttribute {
        inline app::EnumOrderAttribute__Class** type_info() {
            static app::EnumOrderAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EnumOrderAttribute__Class**)(modloader::win::memory::resolve_rva(0x0472CBA8));
            }
            return cache;
        }
        inline app::EnumOrderAttribute__Class* get_class() {
            return il2cpp::get_class<app::EnumOrderAttribute__Class>(type_info(), "", "EnumOrderAttribute");
        }
        inline app::EnumOrderAttribute* create() {
            return il2cpp::create_object<app::EnumOrderAttribute>(get_class());
        }
    } // namespace EnumOrderAttribute
} // namespace app::classes::types
