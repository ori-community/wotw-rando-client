#pragma once
#include <Modloader/app/structs/UserChangeEventArgs.h>
#include <Modloader/app/structs/UserChangeEventArgs__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UserChangeEventArgs {
        inline app::UserChangeEventArgs__Class** type_info() {
            static app::UserChangeEventArgs__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UserChangeEventArgs__Class**)(modloader::win::memory::resolve_rva(0x0478AB10));
            }
            return cache;
        }
        inline app::UserChangeEventArgs__Class* get_class() {
            return il2cpp::get_class<app::UserChangeEventArgs__Class>(type_info(), "Microsoft.Xbox.Services.Xal", "UserChangeEventArgs");
        }
        inline app::UserChangeEventArgs* create() {
            return il2cpp::create_object<app::UserChangeEventArgs>(get_class());
        }
    } // namespace UserChangeEventArgs
} // namespace app::classes::types
