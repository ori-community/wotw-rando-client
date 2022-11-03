#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace FpsTcTestOutput {
        inline app::FpsTcTestOutput__Class** type_info = (app::FpsTcTestOutput__Class**)(modloader::win::memory::resolve_rva(0x0471F6D8));
        inline app::FpsTcTestOutput__Class* get_class() {
            return il2cpp::get_class<app::FpsTcTestOutput__Class>(type_info, "", "FpsTcTestOutput");
        }
        inline app::FpsTcTestOutput* create() {
            return il2cpp::create_object<app::FpsTcTestOutput>(get_class());
        }
    } // namespace FpsTcTestOutput
} // namespace app::classes::types
