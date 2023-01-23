#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XUserResolveIssueWithUiUtf16Result__Class.h>
#include <Modloader/app/structs/XUserResolveIssueWithUiUtf16Result.h>

namespace app::classes::types {
    namespace XUserResolveIssueWithUiUtf16Result {
        inline app::XUserResolveIssueWithUiUtf16Result__Class** type_info = (app::XUserResolveIssueWithUiUtf16Result__Class**)(modloader::win::memory::resolve_rva(0x0473DC90));
        inline app::XUserResolveIssueWithUiUtf16Result__Class* get_class() {
            return il2cpp::get_class<app::XUserResolveIssueWithUiUtf16Result__Class>(type_info, "XGamingRuntime", "XUserResolveIssueWithUiUtf16Result");
        }
        inline app::XUserResolveIssueWithUiUtf16Result* create() {
            return il2cpp::create_object<app::XUserResolveIssueWithUiUtf16Result>(get_class());
        }
    } // namespace XUserResolveIssueWithUiUtf16Result
} // namespace app::classes::types
