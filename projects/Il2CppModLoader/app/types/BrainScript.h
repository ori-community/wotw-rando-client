#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BrainScript {
        namespace {
            app::BrainScript__Class* type_info_ref = nullptr;
        }
        app::BrainScript__Class** type_info = &type_info_ref;
        inline app::BrainScript__Class* get_class() {
            return il2cpp::get_class<app::BrainScript__Class>(type_info, "", "BrainScript");
        }
        inline app::BrainScript* create() {
            return il2cpp::create_object<app::BrainScript>(get_class());
        }
    } // namespace BrainScript
} // namespace app::classes::types
