#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Lookup_2_TKey_TElement_Grouping_System_Object_System_Object___Array__Class.h>
#include <Modloader/app/structs/Lookup_2_TKey_TElement_Grouping_System_Object_System_Object___Array.h>

namespace app::classes::types {
    namespace Lookup_2_TKey_TElement_Grouping_System_Object_System_Object___Array {
        namespace {
            inline app::Lookup_2_TKey_TElement_Grouping_System_Object_System_Object___Array__Class* type_info_ref = nullptr;
        }
        inline app::Lookup_2_TKey_TElement_Grouping_System_Object_System_Object___Array__Class** type_info = &type_info_ref;
        inline app::Lookup_2_TKey_TElement_Grouping_System_Object_System_Object___Array__Class* get_class() {
            return il2cpp::get_class<app::Lookup_2_TKey_TElement_Grouping_System_Object_System_Object___Array__Class>(type_info, "System.Linq", "Lookup`2[TKey,TElement]+Grouping[System.Object,System.Object][]");
        }
        inline app::Lookup_2_TKey_TElement_Grouping_System_Object_System_Object___Array* create() {
            return il2cpp::create_object<app::Lookup_2_TKey_TElement_Grouping_System_Object_System_Object___Array>(get_class());
        }
    } // namespace Lookup_2_TKey_TElement_Grouping_System_Object_System_Object___Array
} // namespace app::classes::types
