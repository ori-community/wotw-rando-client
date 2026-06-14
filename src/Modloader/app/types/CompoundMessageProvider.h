#pragma once
#include <Modloader/app/structs/CompoundMessageProvider.h>
#include <Modloader/app/structs/CompoundMessageProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CompoundMessageProvider {
        inline app::CompoundMessageProvider__Class** type_info() {
            static app::CompoundMessageProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CompoundMessageProvider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CompoundMessageProvider__Class* get_class() {
            return il2cpp::get_class<app::CompoundMessageProvider__Class>(type_info(), "", "CompoundMessageProvider");
        }
        inline app::CompoundMessageProvider* create() {
            return il2cpp::create_object<app::CompoundMessageProvider>(get_class());
        }
    } // namespace CompoundMessageProvider
} // namespace app::classes::types
