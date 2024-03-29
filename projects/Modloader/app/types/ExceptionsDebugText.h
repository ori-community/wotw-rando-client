#pragma once
#include <Modloader/app/structs/ExceptionsDebugText.h>
#include <Modloader/app/structs/ExceptionsDebugText__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ExceptionsDebugText {
        inline app::ExceptionsDebugText__Class** type_info() {
            static app::ExceptionsDebugText__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ExceptionsDebugText__Class**)(modloader::win::memory::resolve_rva(0x04757AB0));
            }
            return cache;
        }
        inline app::ExceptionsDebugText__Class* get_class() {
            return il2cpp::get_class<app::ExceptionsDebugText__Class>(type_info(), "", "ExceptionsDebugText");
        }
        inline app::ExceptionsDebugText* create() {
            return il2cpp::create_object<app::ExceptionsDebugText>(get_class());
        }
    } // namespace ExceptionsDebugText
} // namespace app::classes::types
