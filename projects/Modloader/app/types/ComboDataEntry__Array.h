#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ComboDataEntry__Array {
        namespace {
            inline app::ComboDataEntry__Array__Class* type_info_ref = nullptr;
        }
        inline app::ComboDataEntry__Array__Class** type_info = &type_info_ref;
        inline app::ComboDataEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::ComboDataEntry__Array__Class>(type_info, "Moon.ComboSystem", "ComboDataEntry[]");
        }
        inline app::ComboDataEntry__Array* create() {
            return il2cpp::create_object<app::ComboDataEntry__Array>(get_class());
        }
    } // namespace ComboDataEntry__Array
} // namespace app::classes::types
