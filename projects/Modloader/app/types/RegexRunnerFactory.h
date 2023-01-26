#pragma once
#include <Modloader/app/structs/RegexRunnerFactory.h>
#include <Modloader/app/structs/RegexRunnerFactory__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RegexRunnerFactory {
        inline app::RegexRunnerFactory__Class** type_info() {
            static app::RegexRunnerFactory__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RegexRunnerFactory__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RegexRunnerFactory__Class* get_class() {
            return il2cpp::get_class<app::RegexRunnerFactory__Class>(type_info(), "System.Text.RegularExpressions", "RegexRunnerFactory");
        }
        inline app::RegexRunnerFactory* create() {
            return il2cpp::create_object<app::RegexRunnerFactory>(get_class());
        }
    } // namespace RegexRunnerFactory
} // namespace app::classes::types
