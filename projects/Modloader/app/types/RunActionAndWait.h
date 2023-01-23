#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RunActionAndWait__Class.h>
#include <Modloader/app/structs/RunActionAndWait.h>

namespace app::classes::types {
    namespace RunActionAndWait {
        namespace {
            inline app::RunActionAndWait__Class* type_info_ref = nullptr;
        }
        inline app::RunActionAndWait__Class** type_info = &type_info_ref;
        inline app::RunActionAndWait__Class* get_class() {
            return il2cpp::get_class<app::RunActionAndWait__Class>(type_info, "", "RunActionAndWait");
        }
        inline app::RunActionAndWait* create() {
            return il2cpp::create_object<app::RunActionAndWait>(get_class());
        }
    } // namespace RunActionAndWait
} // namespace app::classes::types
