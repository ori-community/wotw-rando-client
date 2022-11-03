#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace WaapiJsonSeekOnEventArgs {
        namespace {
            inline app::WaapiJsonSeekOnEventArgs__Class* type_info_ref = nullptr;
        }
        inline app::WaapiJsonSeekOnEventArgs__Class** type_info = &type_info_ref;
        inline app::WaapiJsonSeekOnEventArgs__Class* get_class() {
            return il2cpp::get_class<app::WaapiJsonSeekOnEventArgs__Class>(type_info, "", "WaapiJsonSeekOnEventArgs");
        }
        inline app::WaapiJsonSeekOnEventArgs* create() {
            return il2cpp::create_object<app::WaapiJsonSeekOnEventArgs>(get_class());
        }
    } // namespace WaapiJsonSeekOnEventArgs
} // namespace app::classes::types
