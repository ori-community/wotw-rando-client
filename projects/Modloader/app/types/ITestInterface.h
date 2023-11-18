#pragma once
#include <Modloader/app/structs/ITestInterface.h>
#include <Modloader/app/structs/ITestInterface__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ITestInterface {
        inline app::ITestInterface__Class** type_info() {
            static app::ITestInterface__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ITestInterface__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ITestInterface__Class* get_class() {
            return il2cpp::get_class<app::ITestInterface__Class>(type_info(), "", "ITestInterface");
        }
    } // namespace ITestInterface
} // namespace app::classes::types
