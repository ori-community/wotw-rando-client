#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinHold_ThrowAnimationSet {
        namespace {
            inline app::SeinHold_ThrowAnimationSet__Class* type_info_ref = nullptr;
        }
        inline app::SeinHold_ThrowAnimationSet__Class** type_info = &type_info_ref;
        inline app::SeinHold_ThrowAnimationSet__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinHold_ThrowAnimationSet__Class>(type_info, "", "SeinHold", "ThrowAnimationSet");
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
