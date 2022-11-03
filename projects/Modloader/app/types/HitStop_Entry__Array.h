#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace HitStop_Entry__Array {
        namespace {
            inline app::HitStop_Entry__Array__Class* type_info_ref = nullptr;
        }
        inline app::HitStop_Entry__Array__Class** type_info = &type_info_ref;
        inline app::HitStop_Entry__Array__Class* get_class() {
            return il2cpp::get_class<app::HitStop_Entry__Array__Class>(type_info, "Moon", "HitStop+Entry[]");
        }
        inline app::HitStop_Entry__Array* create() {
            return il2cpp::create_object<app::HitStop_Entry__Array>(get_class());
        }
    } // namespace HitStop_Entry__Array
} // namespace app::classes::types
