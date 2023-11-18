#pragma once
#include <Modloader/app/structs/AkGlobalCallbackLocation__Enum.h>
#include <Modloader/app/structs/AkGlobalCallbackLocation__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkGlobalCallbackLocation__Enum {
        inline app::AkGlobalCallbackLocation__Enum__Class** type_info() {
            static app::AkGlobalCallbackLocation__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AkGlobalCallbackLocation__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AkGlobalCallbackLocation__Enum__Class* get_class() {
            return il2cpp::get_class<app::AkGlobalCallbackLocation__Enum__Class>(type_info(), "", "AkGlobalCallbackLocation");
        }
        inline app::AkGlobalCallbackLocation__Enum* create() {
            return il2cpp::create_object<app::AkGlobalCallbackLocation__Enum>(get_class());
        }
    } // namespace AkGlobalCallbackLocation__Enum
} // namespace app::classes::types
