#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlStats {
        namespace {
            app::PetrifiedOwlStats__Class* type_info_ref = nullptr;
        }
        app::PetrifiedOwlStats__Class** type_info = &type_info_ref;
        inline app::PetrifiedOwlStats__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlStats__Class>(type_info, "", "PetrifiedOwlStats");
        }
        inline app::PetrifiedOwlStats* create() {
            return il2cpp::create_object<app::PetrifiedOwlStats>(get_class());
        }
    } // namespace PetrifiedOwlStats
} // namespace app::classes::types
