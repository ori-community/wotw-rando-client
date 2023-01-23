#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SeinComboHandlerOld__Class.h>
#include <Modloader/app/structs/SeinComboHandlerOld.h>

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
