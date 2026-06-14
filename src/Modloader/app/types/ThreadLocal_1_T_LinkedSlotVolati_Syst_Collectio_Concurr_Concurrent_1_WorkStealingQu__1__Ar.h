#pragma once
#include <Modloader/app/structs/ThreadLocal_1_T_LinkedSlotVolat_Sys_Collecti_Concurr_Concurrent_1_WorkStealingQu__1__Ar__C.h>
#include <Modloader/app/structs/ThreadLocal_1_T_LinkedSlotVolati_Syst_Collectio_Concurr_Concurrent_1_WorkStealingQu__1__Ar.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ThreadLocal_1_T_LinkedSlotVolatile_System_Collections_Concurrent_ConcurrentBag_1_WorkStealingQueue__1__Array {
        inline app::ThreadLocal_1_T_LinkedSlotVolatile_System_Collections_Concurrent_ConcurrentBag_1_WorkStealingQueue__1__Array__Class** type_info() {
            static app::ThreadLocal_1_T_LinkedSlotVolatile_System_Collections_Concurrent_ConcurrentBag_1_WorkStealingQueue__1__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ThreadLocal_1_T_LinkedSlotVolatile_System_Collections_Concurrent_ConcurrentBag_1_WorkStealingQueue__1__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ThreadLocal_1_T_LinkedSlotVolatile_System_Collections_Concurrent_ConcurrentBag_1_WorkStealingQueue__1__Array__Class* get_class() {
            return il2cpp::get_class<app::ThreadLocal_1_T_LinkedSlotVolatile_System_Collections_Concurrent_ConcurrentBag_1_WorkStealingQueue__1__Array__Class>(type_info(), "System.Threading", "ThreadLocal`1[T]+LinkedSlotVolatile[System.Collections.Concurrent.ConcurrentBag`1+WorkStealingQueue][]");
        }
        inline app::ThreadLocal_1_T_LinkedSlotVolatile_System_Collections_Concurrent_ConcurrentBag_1_WorkStealingQueue__1__Array* create() {
            return il2cpp::create_object<app::ThreadLocal_1_T_LinkedSlotVolatile_System_Collections_Concurrent_ConcurrentBag_1_WorkStealingQueue__1__Array>(get_class());
        }
    } // namespace ThreadLocal_1_T_LinkedSlotVolatile_System_Collections_Concurrent_ConcurrentBag_1_WorkStealingQueue__1__Array
} // namespace app::classes::types
