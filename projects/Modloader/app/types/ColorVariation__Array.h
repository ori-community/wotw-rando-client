#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ColorVariation__Array {
        namespace {
            inline app::ColorVariation__Array__Class* type_info_ref = nullptr;
        }
        inline app::ColorVariation__Array__Class** type_info = &type_info_ref;
        inline app::ColorVariation__Array__Class* get_class() {
            return il2cpp::get_class<app::ColorVariation__Array__Class>(type_info, "", "ColorVariation[]");
        }
        inline app::ColorVariation__Array* create() {
            return il2cpp::create_object<app::ColorVariation__Array>(get_class());
        }
    } // namespace ColorVariation__Array
} // namespace app::classes::types
