#pragma once
#include <Modloader/app/structs/AlphabetOptions.h>
#include <Modloader/app/structs/AlphabetOptions__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AlphabetOptions {
        inline app::AlphabetOptions__Class** type_info() {
            static app::AlphabetOptions__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AlphabetOptions__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AlphabetOptions__Class* get_class() {
            return il2cpp::get_class<app::AlphabetOptions__Class>(type_info(), "", "AlphabetOptions");
        }
        inline app::AlphabetOptions* create() {
            return il2cpp::create_object<app::AlphabetOptions>(get_class());
        }
    } // namespace AlphabetOptions
} // namespace app::classes::types
