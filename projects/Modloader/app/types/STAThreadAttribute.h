#pragma once
#include <Modloader/app/structs/STAThreadAttribute.h>
#include <Modloader/app/structs/STAThreadAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace STAThreadAttribute {
        inline app::STAThreadAttribute__Class** type_info() {
            static app::STAThreadAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::STAThreadAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::STAThreadAttribute__Class* get_class() {
            return il2cpp::get_class<app::STAThreadAttribute__Class>(type_info(), "System", "STAThreadAttribute");
        }
        inline app::STAThreadAttribute* create() {
            return il2cpp::create_object<app::STAThreadAttribute>(get_class());
        }
    } // namespace STAThreadAttribute
} // namespace app::classes::types
