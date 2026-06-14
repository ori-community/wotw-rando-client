#pragma once
#include <Modloader/app/structs/RecorderMessageInputUI.h>
#include <Modloader/app/structs/RecorderMessageInputUI__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RecorderMessageInputUI {
        inline app::RecorderMessageInputUI__Class** type_info() {
            static app::RecorderMessageInputUI__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RecorderMessageInputUI__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RecorderMessageInputUI__Class* get_class() {
            return il2cpp::get_class<app::RecorderMessageInputUI__Class>(type_info(), "", "RecorderMessageInputUI");
        }
        inline app::RecorderMessageInputUI* create() {
            return il2cpp::create_object<app::RecorderMessageInputUI>(get_class());
        }
    } // namespace RecorderMessageInputUI
} // namespace app::classes::types
