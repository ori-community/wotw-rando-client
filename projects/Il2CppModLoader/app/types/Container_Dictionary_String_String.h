#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Container_Dictionary_String_String {
        namespace {
            app::Container_Dictionary_String_String__Class* type_info_ref = nullptr;
        }
        app::Container_Dictionary_String_String__Class** type_info = &type_info_ref;
        inline app::Container_Dictionary_String_String__Class* get_class() {
            return il2cpp::get_class<app::Container_Dictionary_String_String__Class>(type_info, "PlayFab.ClientModels", "Container_Dictionary_String_String");
        }
        inline app::Container_Dictionary_String_String* create() {
            return il2cpp::create_object<app::Container_Dictionary_String_String>(get_class());
        }
        inline app::Container_Dictionary_String_String__Array* create_array(int size) {
            return il2cpp::array_new<app::Container_Dictionary_String_String__Array>(get_class(), size);
        }
    } // namespace Container_Dictionary_String_String
} // namespace app::classes::types
