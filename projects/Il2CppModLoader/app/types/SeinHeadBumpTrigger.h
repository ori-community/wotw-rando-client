#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinHeadBumpTrigger {
        namespace {
            app::SeinHeadBumpTrigger__Class* type_info_ref = nullptr;
        }
        app::SeinHeadBumpTrigger__Class** type_info = &type_info_ref;
        inline app::SeinHeadBumpTrigger__Class* get_class() {
            return il2cpp::get_class<app::SeinHeadBumpTrigger__Class>(type_info, "", "SeinHeadBumpTrigger");
        }
        inline app::SeinHeadBumpTrigger* create() {
            return il2cpp::create_object<app::SeinHeadBumpTrigger>(get_class());
        }
    } // namespace SeinHeadBumpTrigger
} // namespace app::classes::types
