#pragma once
#include <Modloader/app/structs/AkEnumFlagAttribute.h>
#include <Modloader/app/structs/AkEnumFlagAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkEnumFlagAttribute {
        inline app::AkEnumFlagAttribute__Class** type_info() {
            static app::AkEnumFlagAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AkEnumFlagAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AkEnumFlagAttribute__Class* get_class() {
            return il2cpp::get_class<app::AkEnumFlagAttribute__Class>(type_info(), "", "AkEnumFlagAttribute");
        }
        inline app::AkEnumFlagAttribute* create() {
            return il2cpp::create_object<app::AkEnumFlagAttribute>(get_class());
        }
    } // namespace AkEnumFlagAttribute
} // namespace app::classes::types
