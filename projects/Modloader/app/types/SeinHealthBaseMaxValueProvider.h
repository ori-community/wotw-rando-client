#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinHealthBaseMaxValueProvider {
        namespace {
            inline app::SeinHealthBaseMaxValueProvider__Class* type_info_ref = nullptr;
        }
        inline app::SeinHealthBaseMaxValueProvider__Class** type_info = &type_info_ref;
        inline app::SeinHealthBaseMaxValueProvider__Class* get_class() {
            return il2cpp::get_class<app::SeinHealthBaseMaxValueProvider__Class>(type_info, "", "SeinHealthBaseMaxValueProvider");
        }
        inline app::SeinHealthBaseMaxValueProvider* create() {
            return il2cpp::create_object<app::SeinHealthBaseMaxValueProvider>(get_class());
        }
    } // namespace SeinHealthBaseMaxValueProvider
} // namespace app::classes::types
