#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace FloatValueProvider {
        namespace {
            inline app::FloatValueProvider__Class* type_info_ref = nullptr;
        }
        inline app::FloatValueProvider__Class** type_info = &type_info_ref;
        inline app::FloatValueProvider__Class* get_class() {
            return il2cpp::get_class<app::FloatValueProvider__Class>(type_info, "", "FloatValueProvider");
        }
        inline app::FloatValueProvider* create() {
            return il2cpp::create_object<app::FloatValueProvider>(get_class());
        }
    } // namespace FloatValueProvider
} // namespace app::classes::types
