#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/List_1_MoonGuid___Array__Class.h>
#include <Modloader/app/structs/List_1_MoonGuid___Array.h>

namespace app::classes::types {
    namespace List_1_MoonGuid___Array {
        namespace {
            inline app::List_1_MoonGuid___Array__Class* type_info_ref = nullptr;
        }
        inline app::List_1_MoonGuid___Array__Class** type_info = &type_info_ref;
        inline app::List_1_MoonGuid___Array__Class* get_class() {
            return il2cpp::get_class<app::List_1_MoonGuid___Array__Class>(type_info, "System.Collections.Generic", "List`1[MoonGuid][]");
        }
        inline app::List_1_MoonGuid___Array* create() {
            return il2cpp::create_object<app::List_1_MoonGuid___Array>(get_class());
        }
    } // namespace List_1_MoonGuid___Array
} // namespace app::classes::types
