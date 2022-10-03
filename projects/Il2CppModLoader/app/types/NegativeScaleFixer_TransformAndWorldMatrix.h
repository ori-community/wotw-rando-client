#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NegativeScaleFixer_TransformAndWorldMatrix {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NegativeScaleFixer_TransformAndWorldMatrix__Class** type_info;
        inline app::NegativeScaleFixer_TransformAndWorldMatrix__Class* get_class() {
            return il2cpp::get_nested_class<app::NegativeScaleFixer_TransformAndWorldMatrix__Class>(type_info, "", "NegativeScaleFixer", "TransformAndWorldMatrix");
        }
        inline app::NegativeScaleFixer_TransformAndWorldMatrix* create() {
            return il2cpp::create_object<app::NegativeScaleFixer_TransformAndWorldMatrix>(get_class());
        }
        inline app::NegativeScaleFixer_TransformAndWorldMatrix__Array* create_array(int size) {
            return il2cpp::array_new<app::NegativeScaleFixer_TransformAndWorldMatrix__Array>(get_class(), size);
        }
    } // namespace NegativeScaleFixer_TransformAndWorldMatrix
} // namespace app::classes::types
