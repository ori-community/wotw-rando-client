#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PathTracerOutput__Class.h>
#include <Modloader/app/structs/PathTracerOutput.h>

namespace app::classes::types {
    namespace PathTracerOutput {
        namespace {
            inline app::PathTracerOutput__Class* type_info_ref = nullptr;
        }
        inline app::PathTracerOutput__Class** type_info = &type_info_ref;
        inline app::PathTracerOutput__Class* get_class() {
            return il2cpp::get_class<app::PathTracerOutput__Class>(type_info, "", "PathTracerOutput");
        }
        inline app::PathTracerOutput* create() {
            return il2cpp::create_object<app::PathTracerOutput>(get_class());
        }
    } // namespace PathTracerOutput
} // namespace app::classes::types
