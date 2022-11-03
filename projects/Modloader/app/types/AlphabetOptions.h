#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AlphabetOptions {
        namespace {
            inline app::AlphabetOptions__Class* type_info_ref = nullptr;
        }
        inline app::AlphabetOptions__Class** type_info = &type_info_ref;
        inline app::AlphabetOptions__Class* get_class() {
            return il2cpp::get_class<app::AlphabetOptions__Class>(type_info, "", "AlphabetOptions");
        }
        inline app::AlphabetOptions* create() {
            return il2cpp::create_object<app::AlphabetOptions>(get_class());
        }
    } // namespace AlphabetOptions
} // namespace app::classes::types
