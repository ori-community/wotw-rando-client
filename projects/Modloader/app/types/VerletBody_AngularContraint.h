#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace VerletBody_AngularContraint {
        namespace {
            inline app::VerletBody_AngularContraint__Class* type_info_ref = nullptr;
        }
        inline app::VerletBody_AngularContraint__Class** type_info = &type_info_ref;
        inline app::VerletBody_AngularContraint__Class* get_class() {
            return il2cpp::get_nested_class<app::VerletBody_AngularContraint__Class>(type_info, "Moon", "VerletBody", "AngularContraint");
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
