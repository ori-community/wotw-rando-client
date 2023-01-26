#pragma once
#include <Modloader/app/structs/VerletBody_AngularContraint.h>
#include <Modloader/app/structs/VerletBody_AngularContraint__Array.h>
#include <Modloader/app/structs/VerletBody_AngularContraint__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VerletBody_AngularContraint {
        inline app::VerletBody_AngularContraint__Class** type_info() {
            static app::VerletBody_AngularContraint__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::VerletBody_AngularContraint__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::VerletBody_AngularContraint__Class* get_class() {
            return il2cpp::get_nested_class<app::VerletBody_AngularContraint__Class>(type_info(), "Moon", "VerletBody", "AngularContraint");
        }
        inline app::VerletBody_AngularContraint* create() {
            return il2cpp::create_object<app::VerletBody_AngularContraint>(get_class());
        }
        inline app::VerletBody_AngularContraint__Array* create_array(int size) {
            return il2cpp::array_new<app::VerletBody_AngularContraint__Array>(get_class(), size);
        }
        inline app::VerletBody_AngularContraint__Array* create_array(const std::vector<app::VerletBody_AngularContraint*>& items) {
            return il2cpp::array_new<app::VerletBody_AngularContraint__Array>(get_class(), items);
        }
    } // namespace VerletBody_AngularContraint
} // namespace app::classes::types
