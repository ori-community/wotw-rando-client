#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RunActionOnce__Class.h>
#include <Modloader/app/structs/RunActionOnce.h>

namespace app::classes::types {
    namespace RunActionOnce {
        namespace {
            inline app::RunActionOnce__Class* type_info_ref = nullptr;
        }
        inline app::RunActionOnce__Class** type_info = &type_info_ref;
        inline app::RunActionOnce__Class* get_class() {
            return il2cpp::get_class<app::RunActionOnce__Class>(type_info, "", "RunActionOnce");
        }
        inline app::RunActionOnce* create() {
            return il2cpp::create_object<app::RunActionOnce>(get_class());
        }
    } // namespace RunActionOnce
} // namespace app::classes::types
