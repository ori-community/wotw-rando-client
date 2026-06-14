#pragma once
#include <Modloader/app/structs/CC_Vibrance.h>
#include <Modloader/app/structs/CC_Vibrance__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CC_Vibrance {
        inline app::CC_Vibrance__Class** type_info() {
            static app::CC_Vibrance__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CC_Vibrance__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CC_Vibrance__Class* get_class() {
            return il2cpp::get_class<app::CC_Vibrance__Class>(type_info(), "", "CC_Vibrance");
        }
        inline app::CC_Vibrance* create() {
            return il2cpp::create_object<app::CC_Vibrance>(get_class());
        }
    } // namespace CC_Vibrance
} // namespace app::classes::types
