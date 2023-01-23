#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/_ParameterInfo__Class.h>

namespace app::classes::types {
    namespace _ParameterInfo {
        namespace {
            inline app::_ParameterInfo__Class* type_info_ref = nullptr;
        }
        inline app::_ParameterInfo__Class** type_info = &type_info_ref;
        inline app::_ParameterInfo__Class* get_class() {
            return il2cpp::get_class<app::_ParameterInfo__Class>(type_info, "System.Runtime.InteropServices", "_ParameterInfo");
        }
    } // namespace _ParameterInfo
} // namespace app::classes::types
