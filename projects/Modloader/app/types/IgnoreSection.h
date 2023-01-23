#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IgnoreSection__Class.h>
#include <Modloader/app/structs/IgnoreSection.h>

namespace app::classes::types {
    namespace IgnoreSection {
        namespace {
            inline app::IgnoreSection__Class* type_info_ref = nullptr;
        }
        inline app::IgnoreSection__Class** type_info = &type_info_ref;
        inline app::IgnoreSection__Class* get_class() {
            return il2cpp::get_class<app::IgnoreSection__Class>(type_info, "System.Configuration", "IgnoreSection");
        }
        inline app::IgnoreSection* create() {
            return il2cpp::create_object<app::IgnoreSection>(get_class());
        }
    } // namespace IgnoreSection
} // namespace app::classes::types
