#pragma once
#include <Modloader/app/structs/FpsTcTestOutput.h>
#include <Modloader/app/structs/FpsTcTestOutput__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FpsTcTestOutput {
        inline app::FpsTcTestOutput__Class** type_info() {
            static app::FpsTcTestOutput__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FpsTcTestOutput__Class**)(modloader::win::memory::resolve_rva(0x0471F6D8));
            }
            return cache;
        }
        inline app::FpsTcTestOutput__Class* get_class() {
            return il2cpp::get_class<app::FpsTcTestOutput__Class>(type_info(), "", "FpsTcTestOutput");
        }
        inline app::FpsTcTestOutput* create() {
            return il2cpp::create_object<app::FpsTcTestOutput>(get_class());
        }
    } // namespace FpsTcTestOutput
} // namespace app::classes::types
