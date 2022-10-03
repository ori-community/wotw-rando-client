#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Tuple_2_Guid_String___Array {
        namespace {
            app::Tuple_2_Guid_String___Array__Class* type_info_ref = nullptr;
        }
        app::Tuple_2_Guid_String___Array__Class** type_info = &type_info_ref;
        inline app::Tuple_2_Guid_String___Array__Class* get_class() {
            return il2cpp::get_class<app::Tuple_2_Guid_String___Array__Class>(type_info, "System", "Tuple`2[Guid,String][]");
        }
        inline app::Tuple_2_Guid_String___Array* create() {
            return il2cpp::create_object<app::Tuple_2_Guid_String___Array>(get_class());
        }
    } // namespace Tuple_2_Guid_String___Array
} // namespace app::classes::types
