#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LightSpear {
        namespace {
            inline app::LightSpear__Class* type_info_ref = nullptr;
        }
        inline app::LightSpear__Class** type_info = &type_info_ref;
        inline app::LightSpear__Class* get_class() {
            return il2cpp::get_class<app::LightSpear__Class>(type_info, "", "LightSpear");
        }
        inline app::LightSpear* create() {
            return il2cpp::create_object<app::LightSpear>(get_class());
        }
    } // namespace LightSpear
} // namespace app::classes::types
