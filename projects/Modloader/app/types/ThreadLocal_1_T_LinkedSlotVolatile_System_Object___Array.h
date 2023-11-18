#pragma once
#include <Modloader/app/structs/ThreadLocal_1_T_LinkedSlotVolatile_System_Object___Array.h>
#include <Modloader/app/structs/ThreadLocal_1_T_LinkedSlotVolatile_System_Object___Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ThreadLocal_1_T_LinkedSlotVolatile_System_Object___Array {
        inline app::ThreadLocal_1_T_LinkedSlotVolatile_System_Object___Array__Class** type_info() {
            static app::ThreadLocal_1_T_LinkedSlotVolatile_System_Object___Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ThreadLocal_1_T_LinkedSlotVolatile_System_Object___Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ThreadLocal_1_T_LinkedSlotVolatile_System_Object___Array__Class* get_class() {
            return il2cpp::get_class<app::ThreadLocal_1_T_LinkedSlotVolatile_System_Object___Array__Class>(type_info(), "System.Threading", "ThreadLocal`1[T]+LinkedSlotVolatile[System.Object][]");
        }
        inline app::ThreadLocal_1_T_LinkedSlotVolatile_System_Object___Array* create() {
            return il2cpp::create_object<app::ThreadLocal_1_T_LinkedSlotVolatile_System_Object___Array>(get_class());
        }
    } // namespace ThreadLocal_1_T_LinkedSlotVolatile_System_Object___Array
} // namespace app::classes::types
