#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BRECORD {
        namespace {
            inline app::BRECORD__Class* type_info_ref = nullptr;
        }
        inline app::BRECORD__Class** type_info = &type_info_ref;
        inline app::BRECORD__Class* get_class() {
            return il2cpp::get_class<app::BRECORD__Class>(type_info, "System", "BRECORD");
        }
        inline app::BRECORD* create() {
            return il2cpp::create_object<app::BRECORD>(get_class());
        }
        inline app::BRECORD__Boxed* box(app::BRECORD value) {
            return il2cpp::box_value<app::BRECORD__Boxed>(get_class(), value);
        }
    } // namespace BRECORD
} // namespace app::classes::types
