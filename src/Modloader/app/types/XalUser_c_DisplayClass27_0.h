#pragma once
#include <Modloader/app/structs/XalUser_c_DisplayClass27_0.h>
#include <Modloader/app/structs/XalUser_c_DisplayClass27_0__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XalUser_c_DisplayClass27_0 {
        inline app::XalUser_c_DisplayClass27_0__Class** type_info() {
            static app::XalUser_c_DisplayClass27_0__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XalUser_c_DisplayClass27_0__Class**)(modloader::win::memory::resolve_rva(0x0473BBF8));
            }
            return cache;
        }
        inline app::XalUser_c_DisplayClass27_0__Class* get_class() {
            return il2cpp::get_nested_class<app::XalUser_c_DisplayClass27_0__Class>(type_info(), "Microsoft.Xbox.Services.Xal", "XalUser", "<>c__DisplayClass27_0");
        }
        inline app::XalUser_c_DisplayClass27_0* create() {
            return il2cpp::create_object<app::XalUser_c_DisplayClass27_0>(get_class());
        }
    } // namespace XalUser_c_DisplayClass27_0
} // namespace app::classes::types
