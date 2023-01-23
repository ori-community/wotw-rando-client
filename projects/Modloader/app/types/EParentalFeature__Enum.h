#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EParentalFeature__Enum__Class.h>
#include <Modloader/app/structs/EParentalFeature__Enum.h>

namespace app::classes::types {
    namespace EParentalFeature__Enum {
        namespace {
            inline app::EParentalFeature__Enum__Class* type_info_ref = nullptr;
        }
        inline app::EParentalFeature__Enum__Class** type_info = &type_info_ref;
        inline app::EParentalFeature__Enum__Class* get_class() {
            return il2cpp::get_class<app::EParentalFeature__Enum__Class>(type_info, "Steamworks", "EParentalFeature");
        }
        inline app::EParentalFeature__Enum* create() {
            return il2cpp::create_object<app::EParentalFeature__Enum>(get_class());
        }
    } // namespace EParentalFeature__Enum
} // namespace app::classes::types
