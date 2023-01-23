#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LegacyEntityDamageReciever_c__Class.h>
#include <Modloader/app/structs/LegacyEntityDamageReciever_c.h>

namespace app::classes::types {
    namespace LegacyEntityDamageReciever_c {
        inline app::LegacyEntityDamageReciever_c__Class** type_info = (app::LegacyEntityDamageReciever_c__Class**)(modloader::win::memory::resolve_rva(0x04780610));
        inline app::LegacyEntityDamageReciever_c__Class* get_class() {
            return il2cpp::get_nested_class<app::LegacyEntityDamageReciever_c__Class>(type_info, "", "LegacyEntityDamageReciever", "<>c");
        }
        inline app::LegacyEntityDamageReciever_c* create() {
            return il2cpp::create_object<app::LegacyEntityDamageReciever_c>(get_class());
        }
    } // namespace LegacyEntityDamageReciever_c
} // namespace app::classes::types
