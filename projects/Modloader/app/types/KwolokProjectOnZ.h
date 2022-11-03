#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace KwolokProjectOnZ {
        namespace {
            inline app::KwolokProjectOnZ__Class* type_info_ref = nullptr;
        }
        inline app::KwolokProjectOnZ__Class** type_info = &type_info_ref;
        inline app::KwolokProjectOnZ__Class* get_class() {
            return il2cpp::get_class<app::KwolokProjectOnZ__Class>(type_info, "", "KwolokProjectOnZ");
        }
        inline app::KwolokProjectOnZ* create() {
            return il2cpp::create_object<app::KwolokProjectOnZ>(get_class());
        }
    } // namespace KwolokProjectOnZ
} // namespace app::classes::types
