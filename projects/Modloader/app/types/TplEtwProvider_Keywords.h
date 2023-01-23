#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TplEtwProvider_Keywords__Class.h>
#include <Modloader/app/structs/TplEtwProvider_Keywords.h>

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
