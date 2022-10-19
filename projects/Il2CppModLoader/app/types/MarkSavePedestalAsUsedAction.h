#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MarkSavePedestalAsUsedAction {
        namespace {
            inline app::MarkSavePedestalAsUsedAction__Class* type_info_ref = nullptr;
        }
        inline app::MarkSavePedestalAsUsedAction__Class** type_info = &type_info_ref;
        inline app::MarkSavePedestalAsUsedAction__Class* get_class() {
            return il2cpp::get_class<app::MarkSavePedestalAsUsedAction__Class>(type_info, "", "MarkSavePedestalAsUsedAction");
        }
        inline app::MarkSavePedestalAsUsedAction* create() {
            return il2cpp::create_object<app::MarkSavePedestalAsUsedAction>(get_class());
        }
    } // namespace MarkSavePedestalAsUsedAction
} // namespace app::classes::types
