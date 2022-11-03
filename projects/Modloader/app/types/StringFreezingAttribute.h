#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace StringFreezingAttribute {
        namespace {
            inline app::StringFreezingAttribute__Class* type_info_ref = nullptr;
        }
        inline app::StringFreezingAttribute__Class** type_info = &type_info_ref;
        inline app::StringFreezingAttribute__Class* get_class() {
            return il2cpp::get_class<app::StringFreezingAttribute__Class>(type_info, "System.Runtime.CompilerServices", "StringFreezingAttribute");
        }
        inline app::StringFreezingAttribute* create() {
            return il2cpp::create_object<app::StringFreezingAttribute>(get_class());
        }
    } // namespace StringFreezingAttribute
} // namespace app::classes::types
