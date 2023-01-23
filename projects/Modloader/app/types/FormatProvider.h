#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/FormatProvider__Class.h>
#include <Modloader/app/structs/FormatProvider.h>

namespace app::classes::types {
    namespace FormatProvider {
        namespace {
            inline app::FormatProvider__Class* type_info_ref = nullptr;
        }
        inline app::FormatProvider__Class** type_info = &type_info_ref;
        inline app::FormatProvider__Class* get_class() {
            return il2cpp::get_class<app::FormatProvider__Class>(type_info, "System.Globalization", "FormatProvider");
        }
        inline app::FormatProvider* create() {
            return il2cpp::create_object<app::FormatProvider>(get_class());
        }
    } // namespace FormatProvider
} // namespace app::classes::types
