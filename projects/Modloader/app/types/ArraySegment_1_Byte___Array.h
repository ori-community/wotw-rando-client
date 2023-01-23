#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ArraySegment_1_Byte___Array__Class.h>
#include <Modloader/app/structs/ArraySegment_1_Byte___Array.h>

namespace app::classes::types {
    namespace ArraySegment_1_Byte___Array {
        inline app::ArraySegment_1_Byte___Array__Class** type_info = (app::ArraySegment_1_Byte___Array__Class**)(modloader::win::memory::resolve_rva(0x0470BAE8));
        inline app::ArraySegment_1_Byte___Array__Class* get_class() {
            return il2cpp::get_class<app::ArraySegment_1_Byte___Array__Class>(type_info, "System", "ArraySegment`1[Byte][]");
        }
        inline app::ArraySegment_1_Byte___Array* create() {
            return il2cpp::create_object<app::ArraySegment_1_Byte___Array>(get_class());
        }
    } // namespace ArraySegment_1_Byte___Array
} // namespace app::classes::types
