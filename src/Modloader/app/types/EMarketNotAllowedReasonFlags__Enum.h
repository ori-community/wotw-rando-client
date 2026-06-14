#pragma once
#include <Modloader/app/structs/EMarketNotAllowedReasonFlags__Enum.h>
#include <Modloader/app/structs/EMarketNotAllowedReasonFlags__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EMarketNotAllowedReasonFlags__Enum {
        inline app::EMarketNotAllowedReasonFlags__Enum__Class** type_info() {
            static app::EMarketNotAllowedReasonFlags__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EMarketNotAllowedReasonFlags__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EMarketNotAllowedReasonFlags__Enum__Class* get_class() {
            return il2cpp::get_class<app::EMarketNotAllowedReasonFlags__Enum__Class>(type_info(), "Steamworks", "EMarketNotAllowedReasonFlags");
        }
        inline app::EMarketNotAllowedReasonFlags__Enum* create() {
            return il2cpp::create_object<app::EMarketNotAllowedReasonFlags__Enum>(get_class());
        }
    } // namespace EMarketNotAllowedReasonFlags__Enum
} // namespace app::classes::types
