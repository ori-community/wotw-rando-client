#pragma once
#include <Modloader/app/structs/BitVector32.h>
#include <Modloader/app/structs/BitVector32__Boxed.h>
#include <Modloader/app/structs/BitVector32__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BitVector32 {
        inline app::BitVector32__Class** type_info() {
            static app::BitVector32__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BitVector32__Class**)(modloader::win::memory::resolve_rva(0x04718970));
            }
            return cache;
        }
        inline app::BitVector32__Class* get_class() {
            return il2cpp::get_class<app::BitVector32__Class>(type_info(), "System.Collections.Specialized", "BitVector32");
        }
        inline app::BitVector32* create() {
            return il2cpp::create_object<app::BitVector32>(get_class());
        }
        inline app::BitVector32__Boxed* box(app::BitVector32 value) {
            return il2cpp::box_value<app::BitVector32__Boxed>(get_class(), value);
        }
    } // namespace BitVector32
} // namespace app::classes::types
