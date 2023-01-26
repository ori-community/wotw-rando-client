#pragma once
#include <Modloader/app/structs/InitArgs.h>
#include <Modloader/app/structs/InitArgs__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InitArgs {
        inline app::InitArgs__Class** type_info() {
            static app::InitArgs__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::InitArgs__Class**)(modloader::win::memory::resolve_rva(0x0473CA30));
            }
            return cache;
        }
        inline app::InitArgs__Class* get_class() {
            return il2cpp::get_class<app::InitArgs__Class>(type_info(), "Microsoft.Xbox.Services.Xal", "InitArgs");
        }
        inline app::InitArgs* create() {
            return il2cpp::create_object<app::InitArgs>(get_class());
        }
    } // namespace InitArgs
} // namespace app::classes::types
