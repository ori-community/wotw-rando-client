#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlHealthProvider {
        namespace {
            app::PetrifiedOwlHealthProvider__Class* type_info_ref = nullptr;
        }
        app::PetrifiedOwlHealthProvider__Class** type_info = &type_info_ref;
        inline app::PetrifiedOwlHealthProvider__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlHealthProvider__Class>(type_info, "", "PetrifiedOwlHealthProvider");
        }
        inline app::PetrifiedOwlHealthProvider* create() {
            return il2cpp::create_object<app::PetrifiedOwlHealthProvider>(get_class());
        }
    } // namespace PetrifiedOwlHealthProvider
} // namespace app::classes::types
