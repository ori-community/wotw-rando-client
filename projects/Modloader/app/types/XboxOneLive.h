#pragma once
#include <Modloader/app/structs/XboxOneLive.h>
#include <Modloader/app/structs/XboxOneLive__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XboxOneLive {
        inline app::XboxOneLive__Class** type_info() {
            static app::XboxOneLive__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XboxOneLive__Class**)(modloader::win::memory::resolve_rva(0x0471CAE8));
            }
            return cache;
        }
        inline app::XboxOneLive__Class* get_class() {
            return il2cpp::get_class<app::XboxOneLive__Class>(type_info(), "", "XboxOneLive");
        }
        inline app::XboxOneLive* create() {
            return il2cpp::create_object<app::XboxOneLive>(get_class());
        }
    } // namespace XboxOneLive
} // namespace app::classes::types
