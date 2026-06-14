#pragma once
#include <Modloader/app/structs/XboxRecorder.h>
#include <Modloader/app/structs/XboxRecorder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XboxRecorder {
        inline app::XboxRecorder__Class** type_info() {
            static app::XboxRecorder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XboxRecorder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XboxRecorder__Class* get_class() {
            return il2cpp::get_class<app::XboxRecorder__Class>(type_info(), "", "XboxRecorder");
        }
        inline app::XboxRecorder* create() {
            return il2cpp::create_object<app::XboxRecorder>(get_class());
        }
    } // namespace XboxRecorder
} // namespace app::classes::types
