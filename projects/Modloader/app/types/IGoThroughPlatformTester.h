#pragma once
#include <Modloader/app/structs/IGoThroughPlatformTester.h>
#include <Modloader/app/structs/IGoThroughPlatformTester__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IGoThroughPlatformTester {
        inline app::IGoThroughPlatformTester__Class** type_info() {
            static app::IGoThroughPlatformTester__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IGoThroughPlatformTester__Class**)(modloader::win::memory::resolve_rva(0x04708E90));
            }
            return cache;
        }
        inline app::IGoThroughPlatformTester__Class* get_class() {
            return il2cpp::get_class<app::IGoThroughPlatformTester__Class>(type_info(), "", "IGoThroughPlatformTester");
        }
    } // namespace IGoThroughPlatformTester
} // namespace app::classes::types
