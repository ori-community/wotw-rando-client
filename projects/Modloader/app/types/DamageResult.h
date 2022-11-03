#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DamageResult {
        inline app::DamageResult__Class** type_info = (app::DamageResult__Class**)(modloader::win::memory::resolve_rva(0x04747D60));
        inline app::DamageResult__Class* get_class() {
            return il2cpp::get_class<app::DamageResult__Class>(type_info, "", "DamageResult");
        }
        inline app::DamageResult* create() {
            return il2cpp::create_object<app::DamageResult>(get_class());
        }
        inline app::DamageResult__Boxed* box(app::DamageResult value) {
            return il2cpp::box_value<app::DamageResult__Boxed>(get_class(), value);
        }
    } // namespace DamageResult
} // namespace app::classes::types
