#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LegacyDamageReciever__Array__Class.h>
#include <Modloader/app/structs/LegacyDamageReciever__Array.h>

namespace app::classes::types {
    namespace LegacyDamageReciever__Array {
        namespace {
            inline app::LegacyDamageReciever__Array__Class* type_info_ref = nullptr;
        }
        inline app::LegacyDamageReciever__Array__Class** type_info = &type_info_ref;
        inline app::LegacyDamageReciever__Array__Class* get_class() {
            return il2cpp::get_class<app::LegacyDamageReciever__Array__Class>(type_info, "", "LegacyDamageReciever[]");
        }
        inline app::LegacyDamageReciever__Array* create() {
            return il2cpp::create_object<app::LegacyDamageReciever__Array>(get_class());
        }
    } // namespace LegacyDamageReciever__Array
} // namespace app::classes::types
