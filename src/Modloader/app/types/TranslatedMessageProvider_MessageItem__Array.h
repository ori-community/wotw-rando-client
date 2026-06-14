#pragma once
#include <Modloader/app/structs/TranslatedMessageProvider_MessageItem__Array.h>
#include <Modloader/app/structs/TranslatedMessageProvider_MessageItem__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TranslatedMessageProvider_MessageItem__Array {
        inline app::TranslatedMessageProvider_MessageItem__Array__Class** type_info() {
            static app::TranslatedMessageProvider_MessageItem__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TranslatedMessageProvider_MessageItem__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TranslatedMessageProvider_MessageItem__Array__Class* get_class() {
            return il2cpp::get_class<app::TranslatedMessageProvider_MessageItem__Array__Class>(type_info(), "", "TranslatedMessageProvider+MessageItem[]");
        }
        inline app::TranslatedMessageProvider_MessageItem__Array* create() {
            return il2cpp::create_object<app::TranslatedMessageProvider_MessageItem__Array>(get_class());
        }
    } // namespace TranslatedMessageProvider_MessageItem__Array
} // namespace app::classes::types
