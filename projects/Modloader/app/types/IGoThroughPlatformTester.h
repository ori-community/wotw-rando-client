#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IGoThroughPlatformTester {
        inline app::IGoThroughPlatformTester__Class** type_info = (app::IGoThroughPlatformTester__Class**)(modloader::win::memory::resolve_rva(0x04708E90));
        inline app::IGoThroughPlatformTester__Class* get_class() {
            return il2cpp::get_class<app::IGoThroughPlatformTester__Class>(type_info, "", "IGoThroughPlatformTester");
        }
    } // namespace IGoThroughPlatformTester
} // namespace app::classes::types
