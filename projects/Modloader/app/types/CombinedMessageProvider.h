#pragma once
#include <Modloader/app/structs/CombinedMessageProvider.h>
#include <Modloader/app/structs/CombinedMessageProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CombinedMessageProvider {
        inline app::CombinedMessageProvider__Class** type_info() {
            static app::CombinedMessageProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CombinedMessageProvider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CombinedMessageProvider__Class* get_class() {
            return il2cpp::get_class<app::CombinedMessageProvider__Class>(type_info(), "", "CombinedMessageProvider");
        }
        inline app::CombinedMessageProvider* create() {
            return il2cpp::create_object<app::CombinedMessageProvider>(get_class());
        }
    } // namespace CombinedMessageProvider
} // namespace app::classes::types
