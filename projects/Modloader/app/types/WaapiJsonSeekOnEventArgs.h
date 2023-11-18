#pragma once
#include <Modloader/app/structs/WaapiJsonSeekOnEventArgs.h>
#include <Modloader/app/structs/WaapiJsonSeekOnEventArgs__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WaapiJsonSeekOnEventArgs {
        inline app::WaapiJsonSeekOnEventArgs__Class** type_info() {
            static app::WaapiJsonSeekOnEventArgs__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WaapiJsonSeekOnEventArgs__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WaapiJsonSeekOnEventArgs__Class* get_class() {
            return il2cpp::get_class<app::WaapiJsonSeekOnEventArgs__Class>(type_info(), "", "WaapiJsonSeekOnEventArgs");
        }
        inline app::WaapiJsonSeekOnEventArgs* create() {
            return il2cpp::create_object<app::WaapiJsonSeekOnEventArgs>(get_class());
        }
    } // namespace WaapiJsonSeekOnEventArgs
} // namespace app::classes::types
