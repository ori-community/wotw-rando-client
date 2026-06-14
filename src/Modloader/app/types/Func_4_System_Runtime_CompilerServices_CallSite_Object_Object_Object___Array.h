#pragma once
#include <Modloader/app/structs/Func_4_System_Runtime_CompilerServices_CallSite_Object_Object_Object___Array.h>
#include <Modloader/app/structs/Func_4_System_Runtime_CompilerServices_CallSite_Object_Object_Object___Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Func_4_System_Runtime_CompilerServices_CallSite_Object_Object_Object___Array {
        inline app::Func_4_System_Runtime_CompilerServices_CallSite_Object_Object_Object___Array__Class** type_info() {
            static app::Func_4_System_Runtime_CompilerServices_CallSite_Object_Object_Object___Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Func_4_System_Runtime_CompilerServices_CallSite_Object_Object_Object___Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Func_4_System_Runtime_CompilerServices_CallSite_Object_Object_Object___Array__Class* get_class() {
            return il2cpp::get_class<app::Func_4_System_Runtime_CompilerServices_CallSite_Object_Object_Object___Array__Class>(type_info(), "System", "Func`4[System.Runtime.CompilerServices.CallSite,Object,Object,Object][]");
        }
        inline app::Func_4_System_Runtime_CompilerServices_CallSite_Object_Object_Object___Array* create() {
            return il2cpp::create_object<app::Func_4_System_Runtime_CompilerServices_CallSite_Object_Object_Object___Array>(get_class());
        }
    } // namespace Func_4_System_Runtime_CompilerServices_CallSite_Object_Object_Object___Array
} // namespace app::classes::types
