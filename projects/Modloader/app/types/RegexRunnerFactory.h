#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RegexRunnerFactory__Class.h>
#include <Modloader/app/structs/RegexRunnerFactory.h>

namespace app::classes::types {
    namespace RegexRunnerFactory {
        namespace {
            inline app::RegexRunnerFactory__Class* type_info_ref = nullptr;
        }
        inline app::RegexRunnerFactory__Class** type_info = &type_info_ref;
        inline app::RegexRunnerFactory__Class* get_class() {
            return il2cpp::get_class<app::RegexRunnerFactory__Class>(type_info, "System.Text.RegularExpressions", "RegexRunnerFactory");
        }
        inline app::RegexRunnerFactory* create() {
            return il2cpp::create_object<app::RegexRunnerFactory>(get_class());
        }
    } // namespace RegexRunnerFactory
} // namespace app::classes::types
