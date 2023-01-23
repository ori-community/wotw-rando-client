#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/BlockDamageInterruptionHandler__Array__Class.h>
#include <Modloader/app/structs/BlockDamageInterruptionHandler__Array.h>

namespace app::classes::types {
    namespace BlockDamageInterruptionHandler__Array {
        namespace {
            inline app::BlockDamageInterruptionHandler__Array__Class* type_info_ref = nullptr;
        }
        inline app::BlockDamageInterruptionHandler__Array__Class** type_info = &type_info_ref;
        inline app::BlockDamageInterruptionHandler__Array__Class* get_class() {
            return il2cpp::get_class<app::BlockDamageInterruptionHandler__Array__Class>(type_info, "Moon", "BlockDamageInterruptionHandler[]");
        }
        inline app::BlockDamageInterruptionHandler__Array* create() {
            return il2cpp::create_object<app::BlockDamageInterruptionHandler__Array>(get_class());
        }
    } // namespace BlockDamageInterruptionHandler__Array
} // namespace app::classes::types
