#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CharConverter__Class.h>
#include <Modloader/app/structs/CharConverter.h>

namespace app::classes::types {
    namespace CharConverter {
        namespace {
            inline app::CharConverter__Class* type_info_ref = nullptr;
        }
        inline app::CharConverter__Class** type_info = &type_info_ref;
        inline app::CharConverter__Class* get_class() {
            return il2cpp::get_class<app::CharConverter__Class>(type_info, "System.ComponentModel", "CharConverter");
        }
        inline app::CharConverter* create() {
            return il2cpp::create_object<app::CharConverter>(get_class());
        }
    } // namespace CharConverter
} // namespace app::classes::types
