#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/NameOptions_NameDatabase__Class.h>
#include <Modloader/app/structs/NameOptions_NameDatabase.h>

namespace app::classes::types {
    namespace NameOptions_NameDatabase {
        namespace {
            inline app::NameOptions_NameDatabase__Class* type_info_ref = nullptr;
        }
        inline app::NameOptions_NameDatabase__Class** type_info = &type_info_ref;
        inline app::NameOptions_NameDatabase__Class* get_class() {
            return il2cpp::get_nested_class<app::NameOptions_NameDatabase__Class>(type_info, "", "NameOptions", "NameDatabase");
        }
        inline app::NameOptions_NameDatabase* create() {
            return il2cpp::create_object<app::NameOptions_NameDatabase>(get_class());
        }
    } // namespace NameOptions_NameDatabase
} // namespace app::classes::types
