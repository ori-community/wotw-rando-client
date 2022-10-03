#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBrainBase {
        namespace {
            app::PetrifiedOwlBrainBase__Class* type_info_ref = nullptr;
        }
        app::PetrifiedOwlBrainBase__Class** type_info = &type_info_ref;
        inline app::PetrifiedOwlBrainBase__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlBrainBase__Class>(type_info, "", "PetrifiedOwlBrainBase");
        }
        inline app::PetrifiedOwlBrainBase* create() {
            return il2cpp::create_object<app::PetrifiedOwlBrainBase>(get_class());
        }
    } // namespace PetrifiedOwlBrainBase
} // namespace app::classes::types
