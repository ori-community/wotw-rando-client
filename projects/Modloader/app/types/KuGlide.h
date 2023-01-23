#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/KuGlide__Class.h>
#include <Modloader/app/structs/KuGlide.h>

namespace app::classes::types {
    namespace KuGlide {
        namespace {
            inline app::KuGlide__Class* type_info_ref = nullptr;
        }
        inline app::KuGlide__Class** type_info = &type_info_ref;
        inline app::KuGlide__Class* get_class() {
            return il2cpp::get_class<app::KuGlide__Class>(type_info, "", "KuGlide");
        }
        inline app::KuGlide* create() {
            return il2cpp::create_object<app::KuGlide>(get_class());
        }
    } // namespace KuGlide
} // namespace app::classes::types
