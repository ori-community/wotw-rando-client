#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinLevelValueProvider {
        namespace {
            inline app::SeinLevelValueProvider__Class* type_info_ref = nullptr;
        }
        inline app::SeinLevelValueProvider__Class** type_info = &type_info_ref;
        inline app::SeinLevelValueProvider__Class* get_class() {
            return il2cpp::get_class<app::SeinLevelValueProvider__Class>(type_info, "", "SeinLevelValueProvider");
        }
        inline app::SeinLevelValueProvider* create() {
            return il2cpp::create_object<app::SeinLevelValueProvider>(get_class());
        }
    } // namespace SeinLevelValueProvider
} // namespace app::classes::types
