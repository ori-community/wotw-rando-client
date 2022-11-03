#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CarryableDamageReciever {
        namespace {
            inline app::CarryableDamageReciever__Class* type_info_ref = nullptr;
        }
        inline app::CarryableDamageReciever__Class** type_info = &type_info_ref;
        inline app::CarryableDamageReciever__Class* get_class() {
            return il2cpp::get_class<app::CarryableDamageReciever__Class>(type_info, "", "CarryableDamageReciever");
        }
        inline app::CarryableDamageReciever* create() {
            return il2cpp::create_object<app::CarryableDamageReciever>(get_class());
        }
    } // namespace CarryableDamageReciever
} // namespace app::classes::types
