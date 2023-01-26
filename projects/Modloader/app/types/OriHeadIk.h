#pragma once
#include <Modloader/app/structs/OriHeadIk.h>
#include <Modloader/app/structs/OriHeadIk__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OriHeadIk {
        inline app::OriHeadIk__Class** type_info() {
            static app::OriHeadIk__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::OriHeadIk__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::OriHeadIk__Class* get_class() {
            return il2cpp::get_class<app::OriHeadIk__Class>(type_info(), "Moon", "OriHeadIk");
        }
        inline app::OriHeadIk* create() {
            return il2cpp::create_object<app::OriHeadIk>(get_class());
        }
    } // namespace OriHeadIk
} // namespace app::classes::types
