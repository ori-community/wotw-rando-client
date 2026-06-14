#pragma once
#include <Modloader/app/structs/FOVConversionReport_Issue__Array.h>
#include <Modloader/app/structs/FOVConversionReport_Issue__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FOVConversionReport_Issue__Array {
        inline app::FOVConversionReport_Issue__Array__Class** type_info() {
            static app::FOVConversionReport_Issue__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FOVConversionReport_Issue__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FOVConversionReport_Issue__Array__Class* get_class() {
            return il2cpp::get_class<app::FOVConversionReport_Issue__Array__Class>(type_info(), "Moon.EditorTools", "FOVConversionReport+Issue[]");
        }
        inline app::FOVConversionReport_Issue__Array* create() {
            return il2cpp::create_object<app::FOVConversionReport_Issue__Array>(get_class());
        }
    } // namespace FOVConversionReport_Issue__Array
} // namespace app::classes::types
