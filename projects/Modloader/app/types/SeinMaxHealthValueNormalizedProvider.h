#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SeinMaxHealthValueNormalizedProvider__Class.h>
#include <Modloader/app/structs/SeinMaxHealthValueNormalizedProvider.h>

namespace app::classes::types {
    namespace SeinMaxHealthValueNormalizedProvider {
        namespace {
            inline app::SeinMaxHealthValueNormalizedProvider__Class* type_info_ref = nullptr;
        }
        inline app::SeinMaxHealthValueNormalizedProvider__Class** type_info = &type_info_ref;
        inline app::SeinMaxHealthValueNormalizedProvider__Class* get_class() {
            return il2cpp::get_class<app::SeinMaxHealthValueNormalizedProvider__Class>(type_info, "", "SeinMaxHealthValueNormalizedProvider");
        }
        inline app::SeinMaxHealthValueNormalizedProvider* create() {
            return il2cpp::create_object<app::SeinMaxHealthValueNormalizedProvider>(get_class());
        }
    } // namespace SeinMaxHealthValueNormalizedProvider
} // namespace app::classes::types
