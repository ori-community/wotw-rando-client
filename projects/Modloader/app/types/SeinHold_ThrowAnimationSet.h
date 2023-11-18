#pragma once
#include <Modloader/app/structs/SeinHold_ThrowAnimationSet.h>
#include <Modloader/app/structs/SeinHold_ThrowAnimationSet__Array.h>
#include <Modloader/app/structs/SeinHold_ThrowAnimationSet__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinHold_ThrowAnimationSet {
        inline app::SeinHold_ThrowAnimationSet__Class** type_info() {
            static app::SeinHold_ThrowAnimationSet__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinHold_ThrowAnimationSet__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinHold_ThrowAnimationSet__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinHold_ThrowAnimationSet__Class>(type_info(), "", "SeinHold", "ThrowAnimationSet");
        }
        inline app::SeinHold_ThrowAnimationSet* create() {
            return il2cpp::create_object<app::SeinHold_ThrowAnimationSet>(get_class());
        }
        inline app::SeinHold_ThrowAnimationSet__Array* create_array(int size) {
            return il2cpp::array_new<app::SeinHold_ThrowAnimationSet__Array>(get_class(), size);
        }
        inline app::SeinHold_ThrowAnimationSet__Array* create_array(const std::vector<app::SeinHold_ThrowAnimationSet*>& items) {
            return il2cpp::array_new<app::SeinHold_ThrowAnimationSet__Array>(get_class(), items);
        }
    } // namespace SeinHold_ThrowAnimationSet
} // namespace app::classes::types
