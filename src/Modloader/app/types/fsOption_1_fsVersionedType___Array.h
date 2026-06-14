#pragma once
#include <Modloader/app/structs/fsOption_1_fsVersionedType___Array.h>
#include <Modloader/app/structs/fsOption_1_fsVersionedType___Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace fsOption_1_fsVersionedType___Array {
        inline app::fsOption_1_fsVersionedType___Array__Class** type_info() {
            static app::fsOption_1_fsVersionedType___Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::fsOption_1_fsVersionedType___Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::fsOption_1_fsVersionedType___Array__Class* get_class() {
            return il2cpp::get_class<app::fsOption_1_fsVersionedType___Array__Class>(type_info(), "FullSerializer.Internal", "fsOption`1[fsVersionedType][]");
        }
        inline app::fsOption_1_fsVersionedType___Array* create() {
            return il2cpp::create_object<app::fsOption_1_fsVersionedType___Array>(get_class());
        }
    } // namespace fsOption_1_fsVersionedType___Array
} // namespace app::classes::types
