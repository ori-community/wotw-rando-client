#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UberWaterReflectionView_UpdateMode__Enum__Class.h>
#include <Modloader/app/structs/UberWaterReflectionView_UpdateMode__Enum.h>

namespace app::classes::types {
    namespace UberWaterReflectionView_UpdateMode__Enum {
        namespace {
            inline app::UberWaterReflectionView_UpdateMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::UberWaterReflectionView_UpdateMode__Enum__Class** type_info = &type_info_ref;
        inline app::UberWaterReflectionView_UpdateMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::UberWaterReflectionView_UpdateMode__Enum__Class>(type_info, "", "UberWaterReflectionView", "UpdateMode");
        }
        inline app::UberWaterReflectionView_UpdateMode__Enum* create() {
            return il2cpp::create_object<app::UberWaterReflectionView_UpdateMode__Enum>(get_class());
        }
    } // namespace UberWaterReflectionView_UpdateMode__Enum
} // namespace app::classes::types
