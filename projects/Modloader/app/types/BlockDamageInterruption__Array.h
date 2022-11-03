#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace BlockDamageInterruption__Array {
        namespace {
            inline app::BlockDamageInterruption__Array__Class* type_info_ref = nullptr;
        }
        inline app::BlockDamageInterruption__Array__Class** type_info = &type_info_ref;
        inline app::BlockDamageInterruption__Array__Class* get_class() {
            return il2cpp::get_class<app::BlockDamageInterruption__Array__Class>(type_info, "Moon.Timeline", "BlockDamageInterruption[]");
        }
        inline app::BlockDamageInterruption__Array* create() {
            return il2cpp::create_object<app::BlockDamageInterruption__Array>(get_class());
        }
    } // namespace BlockDamageInterruption__Array
} // namespace app::classes::types
