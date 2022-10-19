#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TplEtwProvider_Keywords {
        namespace {
            inline app::TplEtwProvider_Keywords__Class* type_info_ref = nullptr;
        }
        inline app::TplEtwProvider_Keywords__Class** type_info = &type_info_ref;
        inline app::TplEtwProvider_Keywords__Class* get_class() {
            return il2cpp::get_nested_class<app::TplEtwProvider_Keywords__Class>(type_info, "System.Diagnostics.Tracing", "TplEtwProvider", "Keywords");
        }
        inline app::TplEtwProvider_Keywords* create() {
            return il2cpp::create_object<app::TplEtwProvider_Keywords>(get_class());
        }
    } // namespace TplEtwProvider_Keywords
} // namespace app::classes::types
