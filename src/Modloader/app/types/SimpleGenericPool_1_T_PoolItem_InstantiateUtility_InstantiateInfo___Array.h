#pragma once
#include <Modloader/app/structs/SimpleGenericPool_1_T_PoolItem_InstantiateUtility_InstantiateInfo___Array.h>
#include <Modloader/app/structs/SimpleGenericPool_1_T_PoolItem_InstantiateUtility_InstantiateInfo___Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SimpleGenericPool_1_T_PoolItem_InstantiateUtility_InstantiateInfo___Array {
        inline app::SimpleGenericPool_1_T_PoolItem_InstantiateUtility_InstantiateInfo___Array__Class** type_info() {
            static app::SimpleGenericPool_1_T_PoolItem_InstantiateUtility_InstantiateInfo___Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SimpleGenericPool_1_T_PoolItem_InstantiateUtility_InstantiateInfo___Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SimpleGenericPool_1_T_PoolItem_InstantiateUtility_InstantiateInfo___Array__Class* get_class() {
            return il2cpp::get_class<app::SimpleGenericPool_1_T_PoolItem_InstantiateUtility_InstantiateInfo___Array__Class>(type_info(), "", "SimpleGenericPool`1[T]+PoolItem[InstantiateUtility+InstantiateInfo][]");
        }
        inline app::SimpleGenericPool_1_T_PoolItem_InstantiateUtility_InstantiateInfo___Array* create() {
            return il2cpp::create_object<app::SimpleGenericPool_1_T_PoolItem_InstantiateUtility_InstantiateInfo___Array>(get_class());
        }
    } // namespace SimpleGenericPool_1_T_PoolItem_InstantiateUtility_InstantiateInfo___Array
} // namespace app::classes::types
