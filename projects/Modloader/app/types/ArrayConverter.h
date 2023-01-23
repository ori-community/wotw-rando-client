#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ArrayConverter__Class.h>
#include <Modloader/app/structs/ArrayConverter.h>

namespace app::classes::types {
    namespace ArrayConverter {
        namespace {
            inline app::ArrayConverter__Class* type_info_ref = nullptr;
        }
        inline app::ArrayConverter__Class** type_info = &type_info_ref;
        inline app::ArrayConverter__Class* get_class() {
            return il2cpp::get_class<app::ArrayConverter__Class>(type_info, "System.ComponentModel", "ArrayConverter");
        }
        inline app::ArrayConverter* create() {
            return il2cpp::create_object<app::ArrayConverter>(get_class());
        }
    } // namespace ArrayConverter
} // namespace app::classes::types
