#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CultureInfoConverter__Class.h>
#include <Modloader/app/structs/CultureInfoConverter.h>

namespace app::classes::types {
    namespace CultureInfoConverter {
        namespace {
            inline app::CultureInfoConverter__Class* type_info_ref = nullptr;
        }
        inline app::CultureInfoConverter__Class** type_info = &type_info_ref;
        inline app::CultureInfoConverter__Class* get_class() {
            return il2cpp::get_class<app::CultureInfoConverter__Class>(type_info, "System.ComponentModel", "CultureInfoConverter");
        }
        inline app::CultureInfoConverter* create() {
            return il2cpp::create_object<app::CultureInfoConverter>(get_class());
        }
    } // namespace CultureInfoConverter
} // namespace app::classes::types
