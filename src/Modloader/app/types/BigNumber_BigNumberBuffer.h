#pragma once
#include <Modloader/app/structs/BigNumber_BigNumberBuffer.h>
#include <Modloader/app/structs/BigNumber_BigNumberBuffer__Boxed.h>
#include <Modloader/app/structs/BigNumber_BigNumberBuffer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BigNumber_BigNumberBuffer {
        inline app::BigNumber_BigNumberBuffer__Class** type_info() {
            static app::BigNumber_BigNumberBuffer__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BigNumber_BigNumberBuffer__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BigNumber_BigNumberBuffer__Class* get_class() {
            return il2cpp::get_nested_class<app::BigNumber_BigNumberBuffer__Class>(type_info(), "System.Numerics", "BigNumber", "BigNumberBuffer");
        }
        inline app::BigNumber_BigNumberBuffer* create() {
            return il2cpp::create_object<app::BigNumber_BigNumberBuffer>(get_class());
        }
        inline app::BigNumber_BigNumberBuffer__Boxed* box(app::BigNumber_BigNumberBuffer value) {
            return il2cpp::box_value<app::BigNumber_BigNumberBuffer__Boxed>(get_class(), value);
        }
    } // namespace BigNumber_BigNumberBuffer
} // namespace app::classes::types
