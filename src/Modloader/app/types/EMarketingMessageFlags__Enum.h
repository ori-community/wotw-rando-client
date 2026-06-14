#pragma once
#include <Modloader/app/structs/EMarketingMessageFlags__Enum.h>
#include <Modloader/app/structs/EMarketingMessageFlags__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EMarketingMessageFlags__Enum {
        inline app::EMarketingMessageFlags__Enum__Class** type_info() {
            static app::EMarketingMessageFlags__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EMarketingMessageFlags__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EMarketingMessageFlags__Enum__Class* get_class() {
            return il2cpp::get_class<app::EMarketingMessageFlags__Enum__Class>(type_info(), "Steamworks", "EMarketingMessageFlags");
        }
        inline app::EMarketingMessageFlags__Enum* create() {
            return il2cpp::create_object<app::EMarketingMessageFlags__Enum>(get_class());
        }
    } // namespace EMarketingMessageFlags__Enum
} // namespace app::classes::types
