#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/FadeOut__Class.h>
#include <Modloader/app/structs/FadeOut.h>

namespace app::classes::types {
    namespace FadeOut {
        namespace {
            inline app::FadeOut__Class* type_info_ref = nullptr;
        }
        inline app::FadeOut__Class** type_info = &type_info_ref;
        inline app::FadeOut__Class* get_class() {
            return il2cpp::get_class<app::FadeOut__Class>(type_info, "", "FadeOut");
        }
        inline app::FadeOut* create() {
            return il2cpp::create_object<app::FadeOut>(get_class());
        }
    } // namespace FadeOut
} // namespace app::classes::types
