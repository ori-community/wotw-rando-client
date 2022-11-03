#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ConfigurationException {
        namespace {
            inline app::ConfigurationException__Class* type_info_ref = nullptr;
        }
        inline app::ConfigurationException__Class** type_info = &type_info_ref;
        inline app::ConfigurationException__Class* get_class() {
            return il2cpp::get_class<app::ConfigurationException__Class>(type_info, "System.Configuration", "ConfigurationException");
        }
        inline app::ConfigurationException* create() {
            return il2cpp::create_object<app::ConfigurationException>(get_class());
        }
    } // namespace ConfigurationException
} // namespace app::classes::types
