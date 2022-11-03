#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UltimateResourceFallbackLocation__Enum {
        namespace {
            inline app::UltimateResourceFallbackLocation__Enum__Class* type_info_ref = nullptr;
        }
        inline app::UltimateResourceFallbackLocation__Enum__Class** type_info = &type_info_ref;
        inline app::UltimateResourceFallbackLocation__Enum__Class* get_class() {
            return il2cpp::get_class<app::UltimateResourceFallbackLocation__Enum__Class>(type_info, "System.Resources", "UltimateResourceFallbackLocation");
        }
        inline app::UltimateResourceFallbackLocation__Enum* create() {
            return il2cpp::create_object<app::UltimateResourceFallbackLocation__Enum>(get_class());
        }
    } // namespace UltimateResourceFallbackLocation__Enum
} // namespace app::classes::types
