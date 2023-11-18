#pragma once
#include <Modloader/app/structs/AkCallbackType__Enum.h>
#include <Modloader/app/structs/AkCallbackType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkCallbackType__Enum {
        inline app::AkCallbackType__Enum__Class** type_info() {
            static app::AkCallbackType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AkCallbackType__Enum__Class**)(modloader::win::memory::resolve_rva(0x04762450));
            }
            return cache;
        }
        inline app::AkCallbackType__Enum__Class* get_class() {
            return il2cpp::get_class<app::AkCallbackType__Enum__Class>(type_info(), "", "AkCallbackType");
        }
        inline app::AkCallbackType__Enum* create() {
            return il2cpp::create_object<app::AkCallbackType__Enum>(get_class());
        }
    } // namespace AkCallbackType__Enum
} // namespace app::classes::types
