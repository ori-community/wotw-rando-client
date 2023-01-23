#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SeinObjectFilter__Class.h>
#include <Modloader/app/structs/SeinObjectFilter.h>

namespace app::classes::types {
    namespace SeinObjectFilter {
        namespace {
            inline app::SeinObjectFilter__Class* type_info_ref = nullptr;
        }
        inline app::SeinObjectFilter__Class** type_info = &type_info_ref;
        inline app::SeinObjectFilter__Class* get_class() {
            return il2cpp::get_class<app::SeinObjectFilter__Class>(type_info, "", "SeinObjectFilter");
        }
        inline app::SeinObjectFilter* create() {
            return il2cpp::create_object<app::SeinObjectFilter>(get_class());
        }
    } // namespace SeinObjectFilter
} // namespace app::classes::types
