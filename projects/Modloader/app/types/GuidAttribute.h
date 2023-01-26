#pragma once
#include <Modloader/app/structs/GuidAttribute.h>
#include <Modloader/app/structs/GuidAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GuidAttribute {
        inline app::GuidAttribute__Class** type_info() {
            static app::GuidAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GuidAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GuidAttribute__Class* get_class() {
            return il2cpp::get_class<app::GuidAttribute__Class>(type_info(), "System.Runtime.InteropServices", "GuidAttribute");
        }
        inline app::GuidAttribute* create() {
            return il2cpp::create_object<app::GuidAttribute>(get_class());
        }
    } // namespace GuidAttribute
} // namespace app::classes::types
