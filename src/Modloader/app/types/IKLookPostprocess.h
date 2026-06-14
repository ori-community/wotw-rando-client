#pragma once
#include <Modloader/app/structs/IKLookPostprocess.h>
#include <Modloader/app/structs/IKLookPostprocess__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IKLookPostprocess {
        inline app::IKLookPostprocess__Class** type_info() {
            static app::IKLookPostprocess__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IKLookPostprocess__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IKLookPostprocess__Class* get_class() {
            return il2cpp::get_class<app::IKLookPostprocess__Class>(type_info(), "Moon", "IKLookPostprocess");
        }
        inline app::IKLookPostprocess* create() {
            return il2cpp::create_object<app::IKLookPostprocess>(get_class());
        }
    } // namespace IKLookPostprocess
} // namespace app::classes::types
