#pragma once
#include <Modloader/app/structs/WispMessageProvider.h>
#include <Modloader/app/structs/WispMessageProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WispMessageProvider {
        inline app::WispMessageProvider__Class** type_info() {
            static app::WispMessageProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WispMessageProvider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WispMessageProvider__Class* get_class() {
            return il2cpp::get_class<app::WispMessageProvider__Class>(type_info(), "", "WispMessageProvider");
        }
        inline app::WispMessageProvider* create() {
            return il2cpp::create_object<app::WispMessageProvider>(get_class());
        }
    } // namespace WispMessageProvider
} // namespace app::classes::types
