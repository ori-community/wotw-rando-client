#pragma once
#include <Modloader/app/structs/AkCallbackSerializer.h>
#include <Modloader/app/structs/AkCallbackSerializer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkCallbackSerializer {
        inline app::AkCallbackSerializer__Class** type_info() {
            static app::AkCallbackSerializer__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AkCallbackSerializer__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AkCallbackSerializer__Class* get_class() {
            return il2cpp::get_class<app::AkCallbackSerializer__Class>(type_info(), "", "AkCallbackSerializer");
        }
        inline app::AkCallbackSerializer* create() {
            return il2cpp::create_object<app::AkCallbackSerializer>(get_class());
        }
    } // namespace AkCallbackSerializer
} // namespace app::classes::types
