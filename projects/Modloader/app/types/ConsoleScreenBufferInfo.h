#pragma once
#include <Modloader/app/structs/ConsoleScreenBufferInfo.h>
#include <Modloader/app/structs/ConsoleScreenBufferInfo__Boxed.h>
#include <Modloader/app/structs/ConsoleScreenBufferInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ConsoleScreenBufferInfo {
        inline app::ConsoleScreenBufferInfo__Class** type_info() {
            static app::ConsoleScreenBufferInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ConsoleScreenBufferInfo__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ConsoleScreenBufferInfo__Class* get_class() {
            return il2cpp::get_class<app::ConsoleScreenBufferInfo__Class>(type_info(), "System", "ConsoleScreenBufferInfo");
        }
        inline app::ConsoleScreenBufferInfo* create() {
            return il2cpp::create_object<app::ConsoleScreenBufferInfo>(get_class());
        }
        inline app::ConsoleScreenBufferInfo__Boxed* box(app::ConsoleScreenBufferInfo value) {
            return il2cpp::box_value<app::ConsoleScreenBufferInfo__Boxed>(get_class(), value);
        }
    } // namespace ConsoleScreenBufferInfo
} // namespace app::classes::types
