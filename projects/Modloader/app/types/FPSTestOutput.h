#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/FPSTestOutput__Class.h>
#include <Modloader/app/structs/FPSTestOutput.h>

namespace app::classes::types {
    namespace FPSTestOutput {
        inline app::FPSTestOutput__Class** type_info = (app::FPSTestOutput__Class**)(modloader::win::memory::resolve_rva(0x0472BFF0));
        inline app::FPSTestOutput__Class* get_class() {
            return il2cpp::get_class<app::FPSTestOutput__Class>(type_info, "", "FPSTestOutput");
        }
        inline app::FPSTestOutput* create() {
            return il2cpp::create_object<app::FPSTestOutput>(get_class());
        }
    } // namespace FPSTestOutput
} // namespace app::classes::types
