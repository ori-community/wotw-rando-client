#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinHold_ThrowAnimationSet {
        namespace {
            app::SeinHold_ThrowAnimationSet__Class* type_info_ref = nullptr;
        }
        app::SeinHold_ThrowAnimationSet__Class** type_info = &type_info_ref;
        inline app::SeinHold_ThrowAnimationSet__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinHold_ThrowAnimationSet__Class>(type_info, "", "SeinHold", "ThrowAnimationSet");
        }
        inline app::SeinHold_ThrowAnimationSet* create() {
            return il2cpp::create_object<app::SeinHold_ThrowAnimationSet>(get_class());
        }
        inline app::SeinHold_ThrowAnimationSet__Array* create_array(int size) {
            return il2cpp::array_new<app::SeinHold_ThrowAnimationSet__Array>(get_class(), size);
        }
    } // namespace SeinHold_ThrowAnimationSet
} // namespace app::classes::types
