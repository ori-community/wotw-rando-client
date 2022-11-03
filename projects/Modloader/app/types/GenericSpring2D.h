#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GenericSpring2D {
        namespace {
            inline app::GenericSpring2D__Class* type_info_ref = nullptr;
        }
        inline app::GenericSpring2D__Class** type_info = &type_info_ref;
        inline app::GenericSpring2D__Class* get_class() {
            return il2cpp::get_class<app::GenericSpring2D__Class>(type_info, "", "GenericSpring2D");
        }
        inline app::GenericSpring2D* create() {
            return il2cpp::create_object<app::GenericSpring2D>(get_class());
        }
    } // namespace GenericSpring2D
} // namespace app::classes::types
