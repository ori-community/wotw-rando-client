#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Brain {
        namespace {
            inline app::Brain__Class* type_info_ref = nullptr;
        }
        inline app::Brain__Class** type_info = &type_info_ref;
        inline app::Brain__Class* get_class() {
            return il2cpp::get_class<app::Brain__Class>(type_info, "Moon", "Brain");
        }
        inline app::Brain* create() {
            return il2cpp::create_object<app::Brain>(get_class());
        }
    } // namespace Brain
} // namespace app::classes::types
