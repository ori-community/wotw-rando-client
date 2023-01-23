#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ContrastVignette__Class.h>
#include <Modloader/app/structs/ContrastVignette.h>

namespace app::classes::types {
    namespace ContrastVignette {
        namespace {
            inline app::ContrastVignette__Class* type_info_ref = nullptr;
        }
        inline app::ContrastVignette__Class** type_info = &type_info_ref;
        inline app::ContrastVignette__Class* get_class() {
            return il2cpp::get_class<app::ContrastVignette__Class>(type_info, "Colorful", "ContrastVignette");
        }
        inline app::ContrastVignette* create() {
            return il2cpp::create_object<app::ContrastVignette>(get_class());
        }
    } // namespace ContrastVignette
} // namespace app::classes::types
