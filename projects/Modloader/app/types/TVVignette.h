#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TVVignette__Class.h>
#include <Modloader/app/structs/TVVignette.h>

namespace app::classes::types {
    namespace TVVignette {
        namespace {
            inline app::TVVignette__Class* type_info_ref = nullptr;
        }
        inline app::TVVignette__Class** type_info = &type_info_ref;
        inline app::TVVignette__Class* get_class() {
            return il2cpp::get_class<app::TVVignette__Class>(type_info, "Colorful", "TVVignette");
        }
        inline app::TVVignette* create() {
            return il2cpp::create_object<app::TVVignette>(get_class());
        }
    } // namespace TVVignette
} // namespace app::classes::types
