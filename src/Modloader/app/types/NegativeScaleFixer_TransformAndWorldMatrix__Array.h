#pragma once
#include <Modloader/app/structs/NegativeScaleFixer_TransformAndWorldMatrix__Array.h>
#include <Modloader/app/structs/NegativeScaleFixer_TransformAndWorldMatrix__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NegativeScaleFixer_TransformAndWorldMatrix__Array {
        inline app::NegativeScaleFixer_TransformAndWorldMatrix__Array__Class** type_info() {
            static app::NegativeScaleFixer_TransformAndWorldMatrix__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NegativeScaleFixer_TransformAndWorldMatrix__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NegativeScaleFixer_TransformAndWorldMatrix__Array__Class* get_class() {
            return il2cpp::get_class<app::NegativeScaleFixer_TransformAndWorldMatrix__Array__Class>(type_info(), "", "NegativeScaleFixer+TransformAndWorldMatrix[]");
        }
        inline app::NegativeScaleFixer_TransformAndWorldMatrix__Array* create() {
            return il2cpp::create_object<app::NegativeScaleFixer_TransformAndWorldMatrix__Array>(get_class());
        }
    } // namespace NegativeScaleFixer_TransformAndWorldMatrix__Array
} // namespace app::classes::types
