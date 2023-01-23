#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/FOVConversionReport_Issue__Array__Class.h>
#include <Modloader/app/structs/FOVConversionReport_Issue__Array.h>

namespace app::classes::types {
    namespace FOVConversionReport_Issue__Array {
        namespace {
            inline app::FOVConversionReport_Issue__Array__Class* type_info_ref = nullptr;
        }
        inline app::FOVConversionReport_Issue__Array__Class** type_info = &type_info_ref;
        inline app::FOVConversionReport_Issue__Array__Class* get_class() {
            return il2cpp::get_class<app::FOVConversionReport_Issue__Array__Class>(type_info, "Moon.EditorTools", "FOVConversionReport+Issue[]");
        }
        inline app::FOVConversionReport_Issue__Array* create() {
            return il2cpp::create_object<app::FOVConversionReport_Issue__Array>(get_class());
        }
    } // namespace FOVConversionReport_Issue__Array
} // namespace app::classes::types
