#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RubberBandedValueProvider__Class.h>
#include <Modloader/app/structs/RubberBandedValueProvider.h>

namespace app::classes::types {
    namespace RubberBandedValueProvider {
        namespace {
            inline app::RubberBandedValueProvider__Class* type_info_ref = nullptr;
        }
        inline app::RubberBandedValueProvider__Class** type_info = &type_info_ref;
        inline app::RubberBandedValueProvider__Class* get_class() {
            return il2cpp::get_class<app::RubberBandedValueProvider__Class>(type_info, "", "RubberBandedValueProvider");
        }
        inline app::RubberBandedValueProvider* create() {
            return il2cpp::create_object<app::RubberBandedValueProvider>(get_class());
        }
    } // namespace RubberBandedValueProvider
} // namespace app::classes::types
