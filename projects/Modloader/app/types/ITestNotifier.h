#pragma once
#include <Modloader/app/structs/ITestNotifier.h>
#include <Modloader/app/structs/ITestNotifier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ITestNotifier {
        inline app::ITestNotifier__Class** type_info() {
            static app::ITestNotifier__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ITestNotifier__Class**)(modloader::win::memory::resolve_rva(0x04795C88));
            }
            return cache;
        }
        inline app::ITestNotifier__Class* get_class() {
            return il2cpp::get_class<app::ITestNotifier__Class>(type_info(), "", "ITestNotifier");
        }
    } // namespace ITestNotifier
} // namespace app::classes::types
