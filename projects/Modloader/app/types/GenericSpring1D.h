#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GenericSpring1D {
        namespace {
            inline app::GenericSpring1D__Class* type_info_ref = nullptr;
        }
        inline app::GenericSpring1D__Class** type_info = &type_info_ref;
        inline app::GenericSpring1D__Class* get_class() {
            return il2cpp::get_class<app::GenericSpring1D__Class>(type_info, "", "GenericSpring1D");
        }
        inline app::GenericSpring1D* create() {
            return il2cpp::create_object<app::GenericSpring1D>(get_class());
        }
    } // namespace GenericSpring1D
} // namespace app::classes::types
