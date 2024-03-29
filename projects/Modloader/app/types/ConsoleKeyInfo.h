#pragma once
#include <Modloader/app/structs/ConsoleKeyInfo.h>
#include <Modloader/app/structs/ConsoleKeyInfo__Boxed.h>
#include <Modloader/app/structs/ConsoleKeyInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ConsoleKeyInfo {
        inline app::ConsoleKeyInfo__Class** type_info() {
            static app::ConsoleKeyInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ConsoleKeyInfo__Class**)(modloader::win::memory::resolve_rva(0x04735400));
            }
            return cache;
        }
        inline app::ConsoleKeyInfo__Class* get_class() {
            return il2cpp::get_class<app::ConsoleKeyInfo__Class>(type_info(), "System", "ConsoleKeyInfo");
        }
        inline app::ConsoleKeyInfo* create() {
            return il2cpp::create_object<app::ConsoleKeyInfo>(get_class());
        }
        inline app::ConsoleKeyInfo__Boxed* box(app::ConsoleKeyInfo value) {
            return il2cpp::box_value<app::ConsoleKeyInfo__Boxed>(get_class(), value);
        }
    } // namespace ConsoleKeyInfo
} // namespace app::classes::types
