#pragma once
#include <Modloader/app/structs/ChannelBindingKind__Enum.h>
#include <Modloader/app/structs/ChannelBindingKind__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ChannelBindingKind__Enum {
        inline app::ChannelBindingKind__Enum__Class** type_info() {
            static app::ChannelBindingKind__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ChannelBindingKind__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ChannelBindingKind__Enum__Class* get_class() {
            return il2cpp::get_class<app::ChannelBindingKind__Enum__Class>(type_info(), "System.Security.Authentication.ExtendedProtection", "ChannelBindingKind");
        }
        inline app::ChannelBindingKind__Enum* create() {
            return il2cpp::create_object<app::ChannelBindingKind__Enum>(get_class());
        }
    } // namespace ChannelBindingKind__Enum
} // namespace app::classes::types
