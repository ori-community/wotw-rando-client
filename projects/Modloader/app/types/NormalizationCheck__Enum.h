#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/NormalizationCheck__Enum__Class.h>
#include <Modloader/app/structs/NormalizationCheck__Enum.h>

namespace app::classes::types {
    namespace NormalizationCheck__Enum {
        namespace {
            inline app::NormalizationCheck__Enum__Class* type_info_ref = nullptr;
        }
        inline app::NormalizationCheck__Enum__Class** type_info = &type_info_ref;
        inline app::NormalizationCheck__Enum__Class* get_class() {
            return il2cpp::get_class<app::NormalizationCheck__Enum__Class>(type_info, "System.Text", "NormalizationCheck");
        }
        inline app::NormalizationCheck__Enum* create() {
            return il2cpp::create_object<app::NormalizationCheck__Enum>(get_class());
        }
    } // namespace NormalizationCheck__Enum
} // namespace app::classes::types
