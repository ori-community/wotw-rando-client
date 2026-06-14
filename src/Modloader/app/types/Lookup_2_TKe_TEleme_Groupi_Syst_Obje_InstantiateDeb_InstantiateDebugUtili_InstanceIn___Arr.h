#pragma once
#include <Modloader/app/structs/Lookup_2_TK_TEleme_Groupi_Syst_Obje_InstantiateDeb_InstantiateDebugUtil_InstanceI___Ar__Cl.h>
#include <Modloader/app/structs/Lookup_2_TKe_TEleme_Groupi_Syst_Obje_InstantiateDeb_InstantiateDebugUtili_InstanceIn___Arr.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Lookup_2_TKey_TElement_Grouping_System_Object_InstantiateDebug_InstantiateDebugUtility_InstanceInfo___Array {
        inline app::Lookup_2_TKey_TElement_Grouping_System_Object_InstantiateDebug_InstantiateDebugUtility_InstanceInfo___Array__Class** type_info() {
            static app::Lookup_2_TKey_TElement_Grouping_System_Object_InstantiateDebug_InstantiateDebugUtility_InstanceInfo___Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Lookup_2_TKey_TElement_Grouping_System_Object_InstantiateDebug_InstantiateDebugUtility_InstanceInfo___Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Lookup_2_TKey_TElement_Grouping_System_Object_InstantiateDebug_InstantiateDebugUtility_InstanceInfo___Array__Class* get_class() {
            return il2cpp::get_class<app::Lookup_2_TKey_TElement_Grouping_System_Object_InstantiateDebug_InstantiateDebugUtility_InstanceInfo___Array__Class>(type_info(), "System.Linq", "Lookup`2[TKey,TElement]+Grouping[System.Object,InstantiateDebug.InstantiateDebugUtility+InstanceInfo][]");
        }
        inline app::Lookup_2_TKey_TElement_Grouping_System_Object_InstantiateDebug_InstantiateDebugUtility_InstanceInfo___Array* create() {
            return il2cpp::create_object<app::Lookup_2_TKey_TElement_Grouping_System_Object_InstantiateDebug_InstantiateDebugUtility_InstanceInfo___Array>(get_class());
        }
    } // namespace Lookup_2_TKey_TElement_Grouping_System_Object_InstantiateDebug_InstantiateDebugUtility_InstanceInfo___Array
} // namespace app::classes::types
