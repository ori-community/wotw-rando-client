#pragma once
#include <Modloader/app/structs/IKPostprocess.h>
#include <Modloader/app/structs/IKPostprocess__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IKPostprocess {
        inline app::IKPostprocess__Class** type_info() {
            static app::IKPostprocess__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IKPostprocess__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IKPostprocess__Class* get_class() {
            return il2cpp::get_class<app::IKPostprocess__Class>(type_info(), "Moon", "IKPostprocess");
        }
        inline app::IKPostprocess* create() {
            return il2cpp::create_object<app::IKPostprocess>(get_class());
        }
    } // namespace IKPostprocess
} // namespace app::classes::types
