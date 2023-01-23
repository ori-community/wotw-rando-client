#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Tuple_2_String_Byte___Array__Class.h>
#include <Modloader/app/structs/Tuple_2_String_Byte___Array.h>

namespace app::classes::types {
    namespace Tuple_2_String_Byte___Array {
        inline app::Tuple_2_String_Byte___Array__Class** type_info = (app::Tuple_2_String_Byte___Array__Class**)(modloader::win::memory::resolve_rva(0x04783EB0));
        inline app::Tuple_2_String_Byte___Array__Class* get_class() {
            return il2cpp::get_class<app::Tuple_2_String_Byte___Array__Class>(type_info, "System", "Tuple`2[String,Byte[]][]");
        }
        inline app::Tuple_2_String_Byte___Array* create() {
            return il2cpp::create_object<app::Tuple_2_String_Byte___Array>(get_class());
        }
    } // namespace Tuple_2_String_Byte___Array
} // namespace app::classes::types
