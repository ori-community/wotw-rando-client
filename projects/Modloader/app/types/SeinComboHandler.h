#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SeinComboHandler__Class.h>
#include <Modloader/app/structs/SeinComboHandler.h>

namespace app::classes::types {
    namespace SeinComboHandler {
        namespace {
            inline app::SeinComboHandler__Class* type_info_ref = nullptr;
        }
        inline app::SeinComboHandler__Class** type_info = &type_info_ref;
        inline app::SeinComboHandler__Class* get_class() {
            return il2cpp::get_class<app::SeinComboHandler__Class>(type_info, "", "SeinComboHandler");
        }
        inline app::SeinComboHandler* create() {
            return il2cpp::create_object<app::SeinComboHandler>(get_class());
        }
    } // namespace SeinComboHandler
} // namespace app::classes::types
