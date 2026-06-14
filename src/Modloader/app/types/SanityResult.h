#pragma once
#include <Modloader/app/structs/SanityResult.h>
#include <Modloader/app/structs/SanityResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SanityResult {
        inline app::SanityResult__Class** type_info() {
            static app::SanityResult__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SanityResult__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SanityResult__Class* get_class() {
            return il2cpp::get_class<app::SanityResult__Class>(type_info(), "", "SanityResult");
        }
        inline app::SanityResult* create() {
            return il2cpp::create_object<app::SanityResult>(get_class());
        }
    } // namespace SanityResult
} // namespace app::classes::types
