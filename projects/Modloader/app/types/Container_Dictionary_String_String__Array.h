#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Container_Dictionary_String_String__Array__Class.h>
#include <Modloader/app/structs/Container_Dictionary_String_String__Array.h>

namespace app::classes::types {
    namespace Container_Dictionary_String_String__Array {
        namespace {
            inline app::Container_Dictionary_String_String__Array__Class* type_info_ref = nullptr;
        }
        inline app::Container_Dictionary_String_String__Array__Class** type_info = &type_info_ref;
        inline app::Container_Dictionary_String_String__Array__Class* get_class() {
            return il2cpp::get_class<app::Container_Dictionary_String_String__Array__Class>(type_info, "PlayFab.ClientModels", "Container_Dictionary_String_String[]");
        }
        inline app::Container_Dictionary_String_String__Array* create() {
            return il2cpp::create_object<app::Container_Dictionary_String_String__Array>(get_class());
        }
    } // namespace Container_Dictionary_String_String__Array
} // namespace app::classes::types
