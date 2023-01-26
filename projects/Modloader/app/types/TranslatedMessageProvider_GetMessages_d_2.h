#pragma once
#include <Modloader/app/structs/TranslatedMessageProvider_GetMessages_d_2.h>
#include <Modloader/app/structs/TranslatedMessageProvider_GetMessages_d_2__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TranslatedMessageProvider_GetMessages_d_2 {
        inline app::TranslatedMessageProvider_GetMessages_d_2__Class** type_info() {
            static app::TranslatedMessageProvider_GetMessages_d_2__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TranslatedMessageProvider_GetMessages_d_2__Class**)(modloader::win::memory::resolve_rva(0x047713B8));
            }
            return cache;
        }
        inline app::TranslatedMessageProvider_GetMessages_d_2__Class* get_class() {
            return il2cpp::get_nested_class<app::TranslatedMessageProvider_GetMessages_d_2__Class>(type_info(), "", "TranslatedMessageProvider", "<GetMessages>d__2");
        }
        inline app::TranslatedMessageProvider_GetMessages_d_2* create() {
            return il2cpp::create_object<app::TranslatedMessageProvider_GetMessages_d_2>(get_class());
        }
    } // namespace TranslatedMessageProvider_GetMessages_d_2
} // namespace app::classes::types
