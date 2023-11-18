#pragma once
#include <Modloader/app/structs/RubberBandedValueProvider.h>
#include <Modloader/app/structs/RubberBandedValueProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RubberBandedValueProvider {
        inline app::RubberBandedValueProvider__Class** type_info() {
            static app::RubberBandedValueProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RubberBandedValueProvider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RubberBandedValueProvider__Class* get_class() {
            return il2cpp::get_class<app::RubberBandedValueProvider__Class>(type_info(), "", "RubberBandedValueProvider");
        }
        inline app::RubberBandedValueProvider* create() {
            return il2cpp::create_object<app::RubberBandedValueProvider>(get_class());
        }
    } // namespace RubberBandedValueProvider
} // namespace app::classes::types
