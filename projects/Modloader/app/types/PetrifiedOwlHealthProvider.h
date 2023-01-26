#pragma once
#include <Modloader/app/structs/PetrifiedOwlHealthProvider.h>
#include <Modloader/app/structs/PetrifiedOwlHealthProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlHealthProvider {
        inline app::PetrifiedOwlHealthProvider__Class** type_info() {
            static app::PetrifiedOwlHealthProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PetrifiedOwlHealthProvider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PetrifiedOwlHealthProvider__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlHealthProvider__Class>(type_info(), "", "PetrifiedOwlHealthProvider");
        }
        inline app::PetrifiedOwlHealthProvider* create() {
            return il2cpp::create_object<app::PetrifiedOwlHealthProvider>(get_class());
        }
    } // namespace PetrifiedOwlHealthProvider
} // namespace app::classes::types
