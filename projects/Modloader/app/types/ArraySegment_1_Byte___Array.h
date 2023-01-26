#pragma once
#include <Modloader/app/structs/ArraySegment_1_Byte___Array.h>
#include <Modloader/app/structs/ArraySegment_1_Byte___Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ArraySegment_1_Byte___Array {
        inline app::ArraySegment_1_Byte___Array__Class** type_info() {
            static app::ArraySegment_1_Byte___Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ArraySegment_1_Byte___Array__Class**)(modloader::win::memory::resolve_rva(0x0470BAE8));
            }
            return cache;
        }
        inline app::ArraySegment_1_Byte___Array__Class* get_class() {
            return il2cpp::get_class<app::ArraySegment_1_Byte___Array__Class>(type_info(), "System", "ArraySegment`1[Byte][]");
        }
        inline app::ArraySegment_1_Byte___Array* create() {
            return il2cpp::create_object<app::ArraySegment_1_Byte___Array>(get_class());
        }
    } // namespace ArraySegment_1_Byte___Array
} // namespace app::classes::types
