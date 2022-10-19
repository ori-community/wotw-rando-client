#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinComboHandlerOld {
        namespace {
            inline app::SeinComboHandlerOld__Class* type_info_ref = nullptr;
        }
        inline app::SeinComboHandlerOld__Class** type_info = &type_info_ref;
        inline app::SeinComboHandlerOld__Class* get_class() {
            return il2cpp::get_class<app::SeinComboHandlerOld__Class>(type_info, "", "SeinComboHandlerOld");
        }
        inline app::SeinComboHandlerOld* create() {
            return il2cpp::create_object<app::SeinComboHandlerOld>(get_class());
        }
    } // namespace SeinComboHandlerOld
} // namespace app::classes::types
